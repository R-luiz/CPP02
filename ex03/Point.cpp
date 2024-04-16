
#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
	// std::cout << "Parametric constructor called" << std::endl;
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(const Point &point) {
    // Assignment does nothing since x and y are const
	(void)point.x;
    std::cout << "Assignment operator called but does nothing as x and y are const" << std::endl;
    return *this;
}

Fixed Point::getX(void) const
{
	return this->x;
}

Fixed Point::getY(void) const
{
	return this->y;
}

std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << "Point(" << point.getX() << ", " << point.getY() << ")";
	return out;
}

bool Point::operator==(const Point &point) const
{
	return this->x == point.x && this->y == point.y;
}

bool Point::operator!=(const Point &point) const
{
	return this->x != point.x || this->y != point.y;
}

Point &Point::operator+(const Point &point) const
{
	return *(new Point(this->x + point.x, this->y + point.y));
}

Point &Point::operator-(const Point &point) const
{
	return *(new Point(this->x - point.x, this->y - point.y));
}

float Point::operator*(const Point &point) const
{
	return *(new float((this->x.toFloat() * point.x.toFloat() + this->y.toFloat() * point.y.toFloat()) / (this->lenght() * point.lenght())));
}

float Point::lenght(void) const
{
	float x = this->x.toFloat();
	float y = this->y.toFloat();
	return sqrt(x * x + y * y);
}