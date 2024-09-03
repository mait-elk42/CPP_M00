/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:42:26 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/02 11:28:58 by mait-elk         ###   ########.fr       */
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
					~Fixed();
					Fixed(Fixed &copy);
		Fixed& 		operator=(const Fixed &tocopy);
		int			getRawBits( void ) const;
		void		setRawBits(int const raw);
};