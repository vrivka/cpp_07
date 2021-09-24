#include "Array.hpp"
#include <iostream>

int main()
{
	Array<std::string> a(2);

	try {
		a[0] = "Hello World!";
		a[1] = "Hi, John!";
		a[2] = "This is bad!";
	}
	catch ( std::exception const & )
	{
		std::cout << "error 1\n";
	}
	Array<std::string> b = a;

	for (int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	Array<std::string> c;

	c = a;
	try {
		for (int i = 0; i < c.size(); i++)
			std::cout << c[i] << std::endl;
	}
	catch ( std::exception const & ) {
		std::cout << "error 2\n";
	}
}
