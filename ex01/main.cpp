#include <iostream>
#include "iter.hpp"

//template<typename T>
//void print(T const &a) {
//	std::cout << a << std::endl;
//}
//
//template<typename T>
//void plus_three(T const &a) {
//	const_cast<T &>(a) = a + 3;
//}
//
//int main() {
//	int arr[3] = {1, 2, 3};
//
//	iter(arr, 3, print);
//	iter(arr, 3, plus_three);
//	iter(arr, 3, print);
//}

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}