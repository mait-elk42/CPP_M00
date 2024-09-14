/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:53:45 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/08 09:23:58 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional_bits = 8;

Fixed::Fixed() {
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	this->value = (value << fractional_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) {
	this->value = roundf(value * (1 << fractional_bits));
	std::cout << "Float constructor called " << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	if (&copy != this)
		*this = copy;
}

Fixed&	Fixed::operator=(const Fixed &tocopy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (&tocopy != this)
		this->value = tocopy.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const {
	return (this->value);
}

void	Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)this->value / (1 << fractional_bits));
}

int	Fixed::toInt( void ) const {
	return ((int)((float)this->value / (1 << fractional_bits)));
}

std::ostream    &operator<<(std::ostream &out, const Fixed &obj) {
	return (out << "is " << obj.toFloat() << std::flush);
}