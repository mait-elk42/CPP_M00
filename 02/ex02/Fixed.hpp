/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:42:26 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/02 18:32:23 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	private:
		int					value;
		static const	int	fractional_bits;
	public:
							Fixed();
							Fixed(const int value);
							Fixed(const float value);
							~Fixed();
							Fixed(const Fixed &copy);
		Fixed& 				operator=(const Fixed &tocopy);
		Fixed				operator+(const Fixed &toadd);
		Fixed				operator*(const Fixed &tomul);
		Fixed				operator/(const Fixed &todiv);

		bool				operator>(const Fixed &tocomp);
		bool				operator>=(const Fixed &tocomp);
		bool				operator<(const Fixed &tocomp);
		bool				operator<=(const Fixed &tocomp);
		bool				operator==(const Fixed &tocomp);
		bool				operator!=(const Fixed &tocomp);

		Fixed&				operator++();
		Fixed				operator++(int);

		int					getRawBits( void ) const;
		static const Fixed&		min( const Fixed &f1, const Fixed &f2 );
		static Fixed&		min( Fixed &f1, Fixed &f2 );
		static const Fixed&		max( const Fixed &f1, const Fixed &f2 );
		static Fixed&		max( Fixed &f1, Fixed &f2 );
		void				setRawBits(int const raw);
		float				toFloat( void ) const;
		int					toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
