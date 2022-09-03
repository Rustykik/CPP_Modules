#include "Point.hpp"

Point::Point(): _x(Fixed()), _y(Fixed()) {

}

Point::Point(const Fixed &x, const Fixed &y): _x(x), _y(y) {

}

Point::Point(const Point &point): _x(point.getX()), _y(point.getY()) {

}

Point::~Point() {
}

Point &Point::operator= (const Point &point) {
	const_cast<Fixed&>(this->_x) = point._x;
	const_cast<Fixed&>(this->_y) = point._y;
	return *this;
}

const Fixed &Point::getX() const {
	return this->_x;
}

const Fixed &Point::getY() const {
	return this->_y;
}

Fixed Point::getX() {
	return Fixed(this->_x);
}

Fixed Point::getY() {
	return Fixed(this->_y);
}