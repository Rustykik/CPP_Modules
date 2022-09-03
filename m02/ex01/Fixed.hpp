#pragma once

#include <iostream>
#include <cmath>

class Fixed {
		static int const bits = 8;
		int value;
	public:

	Fixed();
	Fixed(const Fixed &given);
	Fixed(const int value);
	Fixed(const float value);

	~Fixed();

	Fixed &operator= ( const Fixed &given );
	
	float toFloat( void ) const;
	int toInt( void ) const;

	int getRawBits( void ) const;
	void setRawBits( int const rawBits );
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);