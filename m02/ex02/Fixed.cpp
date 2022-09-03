#include "Fixed.hpp"

Fixed::Fixed(): value(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &given) {
	this->value = given.getRawBits();
}

Fixed &Fixed::operator= (const Fixed &was) {
	this->value = was.getRawBits();
	return (*this);
}

int Fixed::getRawBits ( void ) const {
	return this->value;
}

void Fixed::setRawBits ( int const bits ) {
	this->value = bits;
}

Fixed::Fixed(int const value)
{
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(float const value)
{
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

Fixed Fixed::operator+ (Fixed const &given) {
	Fixed res(*this);

	res.setRawBits(this->getRawBits() + given.getRawBits());
	return (res);
}

Fixed Fixed::operator- (Fixed const &given) {
	Fixed res(*this);

	res.setRawBits(this->getRawBits() + given.getRawBits());
	return (res);
}

Fixed Fixed::operator* (Fixed const &given) {
	Fixed res(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)given.getRawBits());
	res.setRawBits((tmp1 * tmp2) / (1 << Fixed::bits));
	return (res);
}

Fixed Fixed::operator/ (Fixed const &given) {
	Fixed res(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)given.getRawBits());
	res.setRawBits((tmp1 * tmp2) / (1 << Fixed::bits));
	return (res);
}

Fixed Fixed::operator++ () {
	++(this->value);
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator-- () {
	--(this->value);
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

bool Fixed::operator> (const Fixed &given) const {
	return this->value > given.getRawBits();
}

bool Fixed::operator>= (const Fixed &given)  const {
	return this->value >= given.getRawBits();
}

bool Fixed::operator< (const Fixed &given) const {
	return !operator>=(given);
}

bool Fixed::operator<= (const Fixed &given) const {
	return !operator>(given);
}

bool Fixed::operator== (const Fixed &given) const {
	return this->value == given.getRawBits();
}

bool Fixed::operator!= (const Fixed &given) const {
	return !operator==(given);
}

Fixed &Fixed::max (Fixed &f1, Fixed &f2) {
	if (f1 > f2) return f1;
	return f2;
}

Fixed &Fixed::min (Fixed &f1, Fixed &f2) {
	if (f1 < f2) return f1;
	return f2;
}

const Fixed &Fixed::max (Fixed const &f1, Fixed const &f2) {
	if (f1 > f2) return f1;
	return f2;
}

const Fixed &Fixed::min (Fixed const &f1, Fixed const &f2) {
	if (f1 < f2) return f1;
	return f2;
}