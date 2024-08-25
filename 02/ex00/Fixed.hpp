/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:42:26 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/25 12:27:48 by mait-elk         ###   ########.fr       */
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
		Fixed& 		operator=(Fixed &value);
		int			getRawBits() const;
		void		setRawBits(int const raw);
};