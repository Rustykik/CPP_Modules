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
	// std::cout << "getRawBits member function was called" << std::endl;
	return this->value;
}

void Fixed::setRawBits ( int const bits ) {
	// std::cout << "setRawBits member function was called" << std::endl;
	this->value = bits;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}