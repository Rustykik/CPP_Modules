#pragma once

#include <iostream>


class Fixed {
		static int const bits = 0;
		int value;
	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &given);
	Fixed &operator= ( const Fixed &given );
	int getRawBits( void ) const;
	void setRawBits( int const rawBits );
};