
#pragma once


#include <cmath>
#include <iostream>
#include <string>

class Fixed
{
	private:
		int integer;
		static const int fractional = 8;
	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed &operator=(const Fixed &fixed);
		friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};