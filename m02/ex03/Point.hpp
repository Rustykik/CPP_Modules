#pragma once

#include "Fixed.hpp"

class Point {
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		~Point();
		Point(const Fixed &x, const Fixed &y);
		Point(const Point &point);
		Point &operator= (const Point &point);

		const Fixed &getX(void) const;
		const Fixed &getY(void) const;
		Fixed getX(void);
		Fixed getY(void);
};