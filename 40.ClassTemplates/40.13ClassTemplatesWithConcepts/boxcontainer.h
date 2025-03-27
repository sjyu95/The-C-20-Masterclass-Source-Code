#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H

#include <concepts>
#include <iostream>

template <typename T = int, size_t maximum = 3>
requires std::is_default_constructible_v<T>
class BoxContainer
{
		static const size_t DEFAULT_CAPACITY = 30;
		static const size_t EXPAND_STEPS = 5;// The box expands the capacity by this amount

	// friend std::ostream& operator<< <> (std::ostream& os, BoxContainer<T> rhs);
	friend std::ostream& operator<< <T> (std::ostream& os, BoxContainer<T> rhs);
public:
	BoxContainer(size_t capacity = DEFAULT_CAPACITY);
	BoxContainer(const BoxContainer& source);
	~BoxContainer();

	// Helper getter methods
	size_t size( ) const { return m_size; }
	size_t capacity() const{return m_capacity;};

	//Method to add items to the collection
	void add(const T& item);

	T get_max() const;

	//Remove items
	bool remove_item(const T& item);
	size_t remove_all(const T& item);

	//In class operators
	void operator +=(const BoxContainer& operand);
	void operator =(const BoxContainer& source);

private :
	void expand(size_t new_capacity);

private :
	T * m_items;
	size_t m_capacity;
	size_t m_size;
};

template <typename T>
inline std::ostream& operator<< (std::ostream& os, BoxContainer<T> rhs) {
	for (size_t i{}; i < rhs.m_size; i++) {
		os << rhs.m_items[i] << " ";
	}
	return os;
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
BoxContainer<T, maximum>::BoxContainer(size_t capacity)
{
	m_items = new T[capacity];
	m_capacity = capacity;
	m_size =0;
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
BoxContainer<T, maximum>::BoxContainer(const BoxContainer& source)
{
	//Set up the new box
	m_items = new T[source.m_capacity];
	m_capacity = source.m_capacity;
	m_size = source.m_size;

	//Copy the items over from source
	for(size_t i{} ; i < source.size(); ++i){
		m_items[i] = source.m_items[i];
	}
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
BoxContainer<T, maximum>::~BoxContainer()
{
	delete[] m_items;
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
void BoxContainer<T, maximum>::expand(size_t new_capacity){
	std::cout << "Expanding to " << new_capacity << std::endl;
	T *new_items_container;

	if (new_capacity <= m_capacity)
		return; // The needed capacity is already there

	//Allocate new(larger) memory
	new_items_container = new T[new_capacity];

	//Copy the items over from old array to new
	for(size_t i{} ; i < m_size; ++i){
		new_items_container[i] = m_items[i];
	}

	//Release the old array
	delete [ ] m_items;

	//Make the current box wrap around the new array
	m_items = new_items_container;

	//Use the new capacity
	m_capacity = new_capacity;
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
void BoxContainer<T, maximum>::add(const T& item){
	if (m_size >= maximum) {
		std::cout << "size can't exceed maximum." << std::endl;
		return;
	}
	if (m_size == m_capacity)
		expand(m_size + EXPAND_STEPS);// Let's expand in increments of 5 to optimize on the calls to expand
	m_items[m_size] = item;
	++m_size;
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
T BoxContainer<T, maximum>::get_max() const {
	T max_item{};
	for (size_t i{}; i < m_size; i++) {
		if (m_items[i] > max_item) {
			max_item = m_items[i];
		}
	}
	return max_item;
}


template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
bool BoxContainer<T, maximum>::remove_item(const T& item){

	//Find the target item
	size_t index {m_capacity + 999}; // A large value outside the range of the current
										// array
	for(size_t i{0}; i < m_size ; ++i){
		if (m_items[i] == item){
			index = i;
			break; // No need for the loop to go on
		}
	}

	if(index > m_size)
		return false; // Item not found in our box here

	//If we fall here, the item is located at m_items[index]

	//Overshadow item at index with last element and decrement m_size
	m_items[index] = m_items[m_size-1];
	m_size--;
	return true;

}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
size_t BoxContainer<T, maximum>::remove_all(const T& item){
	size_t remove_count{};

	bool removed = remove_item(item);
	if(removed)
		++remove_count;

	while(removed == true){
		removed = remove_item(item);
		if(removed)
			++ remove_count;
	}

	return remove_count;
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
void BoxContainer<T, maximum>::operator +=(const BoxContainer<T, maximum>& operand){
	//Make sure the current box can acommodate for the added new elements
	if( (m_size + operand.size()) > m_capacity)
		expand(m_size + operand.size());

	//Copy over the elements
	for(size_t i{} ; i < operand.m_size; ++i){
		m_items [m_size + i] = operand.m_items[i];
	}

	m_size += operand.m_size;

}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
void BoxContainer<T, maximum>::operator =(const BoxContainer<T, maximum>& source){
	T *new_items;

	// Check for self-assignment:
	if (this == &source)
            return;
	/*
	// If the capacities are different, set up a new internal array
	//that matches source, because we want object we are assigning to
	//to match source as much as possible.
	*/
	if (m_capacity != source.m_capacity)
	{
	    new_items = new T[source.m_capacity];
	    delete [ ] m_items;
	    m_items = new_items;
	    m_capacity = source.m_capacity;
	}

	//Copy the items over from source
	for(size_t i{} ; i < source.size(); ++i){
		m_items[i] = source.m_items[i];
	}

	m_size = source.m_size;
}

template <typename T, size_t maximum>
requires std::is_default_constructible_v<T>
BoxContainer<T, maximum> operator +(const BoxContainer<T, maximum>& left, const BoxContainer<T, maximum>& right){
	BoxContainer result(left.size( ) + right.size( ));
	result += left;
	result += right;
	return result;
}

template<>
class BoxContainer<const char *, 4> {
public:
	BoxContainer() = default;
	const char* get_max() const;
private:
	const char * m_items[4]{};
};

inline const char* BoxContainer<const char*, 4>::get_max() const {
	int max_index{};
	for (size_t i{}; i < 4; i++) {
		if (m_items[i] > m_items[max_index]) {
			if (std::strcmp(m_items[i], m_items[max_index]) > 0) {
				max_index = i;
			}
		}
	}
	return m_items[max_index];
}

// template<>
// inline const char* BoxContainer<const char*>::get_max() const {
// 	int max_index{};
// 	for (size_t i{}; i < 4; i++) {
// 		if (m_items[i] > m_items[max_index]) {
// 			if (std::strcmp(m_items[i], m_items[max_index]) > 0) {
// 				max_index = i;
// 			}
// 		}
// 	}
// 	return m_items[max_index];
// }

#endif // BOX_CONTAINER_H
