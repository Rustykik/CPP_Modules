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
	
	Fixed operator+ ( const Fixed &given);
	Fixed operator- ( const Fixed &given);
	Fixed operator* ( const Fixed &given);
	Fixed operator/ ( const Fixed &given);

	Fixed operator++ (void);
	Fixed operator++ (int);
	Fixed operator-- (void);
	Fixed operator-- (int);

	bool operator> (const Fixed &given) const;
	bool operator>= (const Fixed &given) const;

	bool operator< (const Fixed &given) const;
	bool operator<= (const Fixed &given) const;
	
	bool operator== (const Fixed &given) const;
	bool operator!= (const Fixed &given) const;

	float toFloat( void ) const;
	int toInt( void ) const;

	int getRawBits( void ) const;
	void setRawBits( int const rawBits );

	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(Fixed const &f1, Fixed const &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(Fixed const &f1, Fixed const &f2);
};



std::ostream &operator<<(std::ostream &out, Fixed const &value);