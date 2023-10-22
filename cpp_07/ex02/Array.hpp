#ifndef ARAY_HPP
#define ARAY_HPP

#include <iostream>
#include <exception>


template <typename T>
class Array{
private :
	T *array;
	unsigned int size_;

public :
// CONSTRUCTORE AND DESTRUCTORE
	Array() : array(new T) , size_(0) {
		return;
	}

	Array(unsigned int k): size_(k){
		this->array = new T[k];
	};

	Array(Array <T>&to_cpy){
		*this = to_cpy;
	}

	~Array(){
		delete[] array;
	};

	class invalid_argument : public std::exception{
	public :
		const char *what() const _NOEXCEPT{
			return "invalid argument";
		}
	};
	Array& operator=(const Array& princ){
		int k = 0;
		this->size_ = princ.size();
		this->array = new int[size_];
		while(k < size_){
			this->array[k] = princ.array[k];
			k++;
		}
		return *this;
	}

// REGULAR FUNCTION
	T& operator[](unsigned int k){
		if (k >= size_)
			throw invalid_argument();
		return this->array[k];
	}

	unsigned int size(void) const{
		return this->size_;
		}
};

#endif