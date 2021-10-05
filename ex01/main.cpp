#include <iostream>
#include "iter.hpp"

template<typename T>
void print(T const &a) {
	std::cout << a << std::endl;
}

template<typename T>
void plus_three(T const &a) {
	const_cast<T &>(a) += 3;
}

template<typename T>
void plus_desu(T const &a) {
	const_cast<T &>(a) += ", desu";
}

int main() {
	{
		int arr[3] = {1, 2, 3};

		iter<int>(arr, 3, print);
		iter<int>(arr, 3, plus_three);
		iter<int>(arr, 3, print);
	}
	{
		std::string arr[5] = {"Hi", "Hello", "Privet", "Bonjour", "Konnichiwa"};

		iter<std::string>(arr, 5, print);
		iter<std::string>(arr, 5, plus_desu);
		iter<std::string>(arr, 5, print);
	}
}
