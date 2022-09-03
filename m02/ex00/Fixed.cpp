#include "Fixed.hpp"

Fixed::Fixed(): value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &given) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = given.getRawBits();
}

Fixed &Fixed::operator= (const Fixed &was) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = was.getRawBits();
	return (*this);
}

int Fixed::getRawBits ( void ) const {
	std::cout << "getRawBits member function was called" << std::endl;
	return this->value;
}

void Fixed::setRawBits ( int const bits ) {
	std::cout << "setRawBits member function was called" << std::endl;
	this->value = bits;
}
