#include "Array.hpp"
#include <iostream>

int main()
{
//	Array<std::string> a(2);
//
//	try {
//		a[0] = "Hello World!";
//		a[1] = "Hi, John!";
//		a[2] = "This is bad!";
//	}
//	catch ( std::exception const & )
//	{
//		std::cout << "error 1\n";
//	}
//	Array<std::string> b = a;
//
//	for (unsigned int i = 0; i < b.size(); i++)
//		std::cout << b[i] << std::endl;
//
//	Array<std::string> c;
//
//	c = a;
//	try {
//		for (unsigned int i = 0; i < c.size(); i++)
//			std::cout << c[i] << std::endl;
//	}
//	catch ( std::exception const & ) {
//		std::cout << "error 2\n";
//	}
	Array<int> arr(5);

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;
}
