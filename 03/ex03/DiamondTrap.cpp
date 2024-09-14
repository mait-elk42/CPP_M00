/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:26 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 18:03:48 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

}
DiamondTrap::~DiamondTrap() {

}
DiamondTrap::DiamondTrap(const DiamondTrap &copy) {
	if (&copy != this)
		*this = copy;
}
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &copy) {
	if (&copy != this)
		;
	return *this;
}
