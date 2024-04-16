
#include "Point.hpp"

int main( void )
{
	Point a(Fixed(0), Fixed(1));
	Point b(Fixed(3), Fixed(-4));
	Point c(Fixed(-5), Fixed(2));
	Point point(Fixed(0.f), Fixed(-1.f));
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "point: " << point << std::endl;
	std::cout << "bsp(a, b, c, point): " << bsp(a, b, c, point) << std::endl;
	return 0;
}