#include <iostream>
#include "iter.hpp"

template<typename T>
void print(T const &a) { std::cout << a << std::endl; }

template<typename T>
void plus_space(T const &a) { const_cast<T &>(a) += ' '; }

void plus_space(int const &a) { const_cast<int &>(a) += 3; }

template<typename T>
void plus_world(T const &a) { const_cast<T &>(a) += "World"; }

int main() {
	{
		int arr[3] = {1, 2, 3};
		int len = sizeof(arr) / sizeof(int);

		std::cout << "Let's create array of ints, and print them:\n";
		iter<int>(arr, len, print);
		std::cout << "Now to apply function that add 3 to all values\nPrint array of ints:\n";
		iter<int>(arr, len, plus_space);
		iter<int>(arr, len, print);
	}
	std::cout << "\n\n";
	{
		std::cout << "Let's create array of strings, and print them:\n";
		std::string arr[5] = {"Hi", "Hello", "Privet", "Bonjour", "Konnichiwa"};
		int len = sizeof(arr) / sizeof(std::string);

		iter<std::string>(arr, len, print);
		std::cout << "Now to apply function that add ' ', to all, and then add \"World!\" at the end\nPrint array of strings:\n";
		iter<std::string>(arr, len, plus_space);
		iter<std::string>(arr, len, plus_world);
		iter<std::string>(arr, len, print);
	}
}
