#include "Array.hpp"
#include <iostream>

int main() {
	{
		Array<int> a;

		try {
			std::cout << "Let's create an instance of \"Array<int> a\" with empty array\na.size = " << a.size() << "\nLet's try access to 0 element of a object (a[0])\n";
			a[0] = 3;
		}
		catch (std::exception &) {
			std::cerr << "\x1b[31mCannot access to a[0], because array is empty\x1b[0m\n";
		}
	}
	std::cout << "\n\n";
	Array<std::string> a(2);
	std::cout << "Let's create an instance of \"Array<std::string> a\" with array store 2 elements\na.size = " << a.size() << "\nLet's try store strings in element 0, 1 and 2!\n";

	try {
		a[0] = "Hello World!";
		a[1] = "Hi, John!";
		a[2] = "This is bad!";
	}
	catch ( std::exception const & ) {
		std::cerr << "\x1b[31mCannot access to a[2], because array can store only " << a.size() << " elements\x1b[0m\n";
	}
	{
		Array<std::string> b = a;
		Array<std::string> const c(a);

		std::cout << "Let's make a copy of the \"a\" instance as \"Array<std::string> b\" and \"Array<std::string> const c\" and print what they store\nb store:\n";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << '\t' << b[i] << std::endl;
		std::cout << "c store:\n";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << '\t' << c[i] << std::endl;
	}
	std::cout << "\n\n";
	{
		Array<std::string> b;
		std::cout << "Let's create an instance of \"Array<std::string> b\" with empty array\nb.size = " << b.size() << "\nAssign a to b\nNow b.size = " << b.size() << "\nLet's edit array b by adding \" OK!\" at the end\n";

		b = a;
		for (unsigned int i = 0; i < b.size(); i++)
			b[i] += " Ok!";
		std::cout << "b store:\n";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << '\t' << b[i] << std::endl;
		std::cout << "a store:\n";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << '\t' << a[i] << std::endl;
	}
}
