/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:53:45 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/02 16:42:38 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 *		STATIC VARIABLES INIT
 **/
const int	Fixed::fractional_bits = 8;

/**
 *		CONSTRUCTORS && DECONSTRUCTOR
 **/
Fixed::Fixed() {
	value = 0;
}
Fixed::Fixed(const int value) {
	this->value = (value << fractional_bits);
}
Fixed::Fixed(const float value) {
	this->value = roundf(value * (1 << fractional_bits));
}
Fixed::Fixed(const Fixed &copy) {
	if (&copy != this)
		*this = copy;
}
Fixed::~Fixed() {
	
}
/**
 *		COPY
 **/
Fixed&	Fixed::operator=(const Fixed &tocopy) {
	if (&tocopy != this)
		this->value = tocopy.getRawBits();
	return *this;
}

/**
 *		GETTERS
 **/
int		Fixed::getRawBits() const {
	return (this->value);
}

/**
 *		SETTERS
 **/
void	Fixed::setRawBits(int const raw) {
	this->value = raw;
}

/**
 *		CONVERTERS
 **/
float	Fixed::toFloat( void ) const {
	return ((float)this->value / (1 << fractional_bits));
}

int	Fixed::toInt( void ) const {
	return ((int)((float)this->value / (1 << fractional_bits)));
}

/**
 *		OPERATORS
 **/
std::ostream    &operator<<(std::ostream &out, const Fixed &obj) {
	return (out << obj.toFloat() << std::flush);
}

Fixed	Fixed::operator+(const Fixed &toadd) {
	Fixed f(this->toFloat() + toadd.toFloat());
	return (f);
}
Fixed	Fixed::operator*(const Fixed &tomul) {
	Fixed ret;
	float val = this->toFloat() * tomul.toFloat();
	ret.value = roundf(val * (1 << Fixed::fractional_bits));
	return (ret);
}
Fixed	Fixed::operator/(const Fixed &todiv) {
	Fixed ret;
	float val = this->toFloat() / todiv.toFloat();
	ret.value = roundf(val * (1 << Fixed::fractional_bits));
	return (ret);
}
bool	Fixed::operator>(const Fixed &tocomp) {
	return (this->toFloat() > tocomp.toFloat());
}
bool	Fixed::operator>=(const Fixed &tocomp) {
	return (this->toFloat() >= tocomp.toFloat());
}
bool	Fixed::operator<(const Fixed &tocomp) {
	return (this->toFloat() < tocomp.toFloat());
}
bool	Fixed::operator<=(const Fixed &tocomp) {
	return (this->toFloat() <= tocomp.toFloat());
}
bool	Fixed::operator==(const Fixed &tocomp) {
	return (this->toFloat() == tocomp.toFloat());
}
bool	Fixed::operator!=(const Fixed &tocomp) {
	return (this->toFloat() != tocomp.toFloat());
}
Fixed&	Fixed::operator++() {
	++this->value;
	return (*this);
}
Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	this->value++;
	return (tmp);
}

/**
 *		COMPARISION
 **/
Fixed&	Fixed::max( const Fixed &f1, const Fixed &f2 ) {
	if (f1.toFloat() > f2.toFloat())
		return ((Fixed &)f1);
	else
		return ((Fixed &)f2);
}
Fixed&	Fixed::min( const Fixed &f1, const Fixed &f2 ) {
	if (f1.toFloat() < f2.toFloat())
		return ((Fixed &)f1);
	else
		return ((Fixed &)f2);
}