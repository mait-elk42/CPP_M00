/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:53:45 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/07 16:01:58 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional_bits = 8;

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	if (&copy != this)
		*this = copy;
}
Fixed& 		Fixed::operator=(const Fixed &tocopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&tocopy != this)
		this->value = tocopy.getRawBits();
	return *this;
}
int			Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}
void		Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
