#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
#include <cstring>

namespace CU{

class string{
	friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
	friend string operator+ (const string& lhs, const string& rhs);
	public :
	explicit string(const char* data, size_t size = 15 ){
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
	}
	string(const string& source){
		m_size = source.m_size;
		m_data = new char [m_size]; // We want to do deep copy here.
		std::strcpy(m_data,source.m_data);
	}

	string& operator+= (const string& rhs) {
	    std::strcat(m_data, rhs.m_data);
	    return *this;
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

	inline std::ostream& operator<< (std::ostream& out , const CU::string& s){
		out << s.m_data;
		return out;
	}

	inline string operator+ (const string& lhs, const string& rhs) {
	    string tmp{lhs};
	    tmp += rhs;
	    return tmp;
	}

}

inline void use_cu_string(const CU::string& s){
	std::cout << s;

}


#endif // _EXERCISE_H
