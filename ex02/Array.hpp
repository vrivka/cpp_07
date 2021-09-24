#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
private:
	T *array;
	unsigned int len;
public:
	unsigned int size() const {
		return this->len;
	};
	Array<T>() : array(NULL), len(0) {};
	Array<T>( Array<T> const &other ) : len(other.len) {
		if (other.array) {
			this->array = new T[other.len]();
			for (unsigned int i = 0; i < other.len; i++) {
				this->array[i] = other.array[i];
			}
		}
		else
			this->array = NULL;
	};
	Array<T>( unsigned int n ) : len(n) {
		this->array = new T[n]();
	};
	~Array<T>() {
		if (this->array)
			delete [] this->array;
	};
	Array<T> &operator=( Array<T> const &other ) {
		if (this == &other)
			return *this;
		if (this->array)
			delete [] this->array;
		if (other.array) {
			this->array = new T[other.len]();
			for (unsigned int i = 0; i < other.len; i++) {
				this->array[i] = other.array[i];
			}
			this->len = other.len;
		}
		else
			this->array = NULL;
		return *this;
	};
	T &operator[]( unsigned int idx ) throw (std::exception) {
		if (idx >= this->len)
			throw std::exception();
		return array[idx];
	};
};


#endif
