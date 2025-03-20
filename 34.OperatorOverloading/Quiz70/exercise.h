#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <cstring>

namespace CU{

class string{
	friend string operator+( string& left, const string& right);
	public :
	explicit string(const char* data, size_t size = 15 ){
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
	}

		const char* c_str() const{
		return m_data;
	}

	~string(){
		delete [] m_data;
		m_data = nullptr;
	}
	private :
	 unsigned int m_size;
	 char * m_data{nullptr};
};

    //YOUR CODE WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE

inline string operator+( string& left, const string& right) {
    string tmp{"", left.m_size+right.m_size};
    std::strcat(tmp.m_data, left.m_data);
    std::strcat(tmp.m_data, right.m_data);
    return tmp;
}

	//YOUR CODE WILL GO ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE
}



#endif // _EXERCISE_H
