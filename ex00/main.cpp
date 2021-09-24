#include "whatever.hpp"
#include <iostream>

int main() {
	{
		int a = 21;
		int b = 42;

		::swap<int>(a, b);
		std::cout << "a = " << a << "\nb = " << b << std::endl;
		std::cout << "min = " << ::min<int>(a, b) << std::endl;
		std::cout << "max = " << ::max<int>(a, b) << std::endl;
	}
	{
		float a = 21.12;
		float b = 42.24;

		::swap<float>(a, b);
		std::cout << "a = " << a << "\nb = " << b << std::endl;
		std::cout << "min = " << ::min<float>(a, b) << std::endl;
		std::cout << "max = " << ::max<float>(a, b) << std::endl;
	}
	{
		std::string a = "a";
		std::string b = "b";

		::swap<std::string>(a, b);
		std::cout << "a = " << a << "\nb = " << b << std::endl;
		std::cout << "min = " << ::min<std::string>(a, b) << std::endl;
		std::cout << "max = " << ::max<std::string>(a, b) << std::endl;
	}
}

/*
int main() {
	int a = 2;
	int b = 3;

	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}*/
