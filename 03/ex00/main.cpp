/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:19:51 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/14 11:29:23 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Android("Android");
	ClapTrap Ios("IOS");
	int i = 0;
	while ( i++ < 11)
	{
		Android.attack(Ios.getName());
		Ios.takeDamage(Android.getAttackDamage());
	}
}