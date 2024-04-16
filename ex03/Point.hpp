
#include <cmath>
#include <iostream>
#include <string>
#include "Fixed.hpp"

#pragma once

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point &point);
		~Point();
		Point &operator=(const Point &point);
		Fixed getX(void) const;
		Fixed getY(void) const;
		friend std::ostream &operator<<(std::ostream &out, const Point &point);
		bool operator==(const Point &point) const;
		bool operator!=(const Point &point) const;
		Point &operator+(const Point &point) const;
		Point &operator-(const Point &point) const;
		float operator*(const Point &point) const;
		float lenght(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);