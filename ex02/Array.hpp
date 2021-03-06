#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
private:
	T *array;
	unsigned int len;
public:
	unsigned int size() const { return this->len; }

	Array<T>() : array(NULL), len(0) {}

	explicit Array<T>( unsigned int n ) : array(new T[n]()), len(n) {}

	Array<T>( Array<T> const &other ) : len(other.len) {
		if (other.array) {
			this->array = new T[other.len]();
			for (unsigned int i = 0; i < other.len; i++)
				this->array[i] = other.array[i];
		}
		else
			this->array = NULL;
	}

	~Array<T>() { delete [] this->array; }

	Array<T> &operator=( Array<T> const &other ) {
		if (this == &other)
			return *this;
		if (this->array)
			delete [] this->array;
		if (other.array) {
			this->array = new T[other.len]();
			for (unsigned int i = 0; i < other.len; i++)
				this->array[i] = other.array[i];
		}
		else
			this->array = NULL;
		this->len = other.len;
		return *this;
	}

	T &operator[]( unsigned int idx ) throw (std::exception) {
		if (idx >= this->len)
			throw std::exception();
		return array[idx];
	}

	T &operator[]( unsigned int idx ) const throw (std::exception) {
		if (idx >= this->len)
			throw std::exception();
		return array[idx];
	}
};


#endif
