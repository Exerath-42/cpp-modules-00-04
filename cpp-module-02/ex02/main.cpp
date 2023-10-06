#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "------------TESTS FROM SUBJECT------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "---------------MY OWN TESTS---------------" << std::endl;

	Fixed x(2);
	Fixed y(4);
	
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl << std::endl;
	std::cout << "x > y:	" << (x > y) << std::endl;
	std::cout << "x < y:	" << (x < y) << std::endl;
	std::cout << "x == y:	" << (x == y) << std::endl;
	std::cout << "x <= y:	" << (x <= y) << std::endl;
	std::cout << "x >= y:	" << (x >= y) << std::endl;
	std::cout << "x != y:	" << (x != y) << std::endl << std::endl;

	std::cout << "x + y:	" << (y + x) << std::endl;
	std::cout << "x - y:	" << (x - y) << std::endl;
	std::cout << "x * y:	" << (x * y) << std::endl;
	std::cout << "x / y:	" << (x / y) << std::endl << std::endl;

	std::cout << "x:	" << x << std::endl;
	std::cout << "x--:	" << x-- << std::endl;
	std::cout << "x--:	" << x << std::endl;
	std::cout << "y:	" << y << std::endl;
	std::cout << "--y:	" << --y << std::endl;

	return 0;
}
