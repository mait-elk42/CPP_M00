/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:53:45 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/25 16:44:32 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	(void)fractional_bits;
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}
Fixed::Fixed(const int value)
{
	this->value = value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.getRawBits();
}
Fixed& 		Fixed::operator=(Fixed &value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&value != this)
	{
		this->value = getRawBits();
	}
	return *this;
}
int			Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}
void		Fixed::setRawBits(int const raw)
{
	this->value = raw;
}