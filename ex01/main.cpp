#include <iostream>
#include "iter.hpp"

template<typename T>
void print(T const &a) {
	std::cout << a << std::endl;
}

template<typename T>
void plus_three(T const &a) {
	const_cast<T &>(a) = a + 3;
}

int main() {
	int arr[3] = {1, 2, 3};

	iter<int>(arr, 3, print);
	iter<int>(arr, 3, plus_three);
	iter<int>(arr, 3, print);
}
