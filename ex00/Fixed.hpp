
#pragma once

#include <iostream>
#include <string>

class Fixed
{
	private:
		int integer;
		static const int fractional = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed &operator=(const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};