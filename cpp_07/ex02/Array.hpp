#ifndef ARAY_HPP
#define ARAY_HPP

#include <iostream>
#include <exception>

class invalid_argument : public std::exception{
public :
	const char *what(){
		return "invalid argument\n";
	}
};

template <typename T>
class Array{
private :
	T *array;
	unsigned int size_;
public :
	Array() : array(new T) , size_(0) {
		return;
	}
	Array(unsigned int k){
		this->size_ = k;
		this->array = new T[k];
	};
	Array(Array <T>&to_cpy){
		*this = to_cpy;
	}
	T& operator[](int k){
		if (k >= size_)
			throw invalid_argument();
		return this->array[k];
	}
	unsigned int size(void) const{
		return this->size_;
		}
	Array& operator=(Array princ){
		int k = -1;
		unsigned int size = this->size();
		this->array = new int[size_];
		while(++k < size_)
			this->array[k] = princ.array[k];
		return *this;
	}
};

#endif