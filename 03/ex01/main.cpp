/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:19:51 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/14 11:44:08 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Android("Android");
	ScavTrap Ios("IOS");
	int i = 0;
	Ios.guardGate();
	while ( i++ < 10 )
	{
		Android.attack(Ios.getName());
		Ios.takeDamage(Android.getAttackDamage());
	}
}