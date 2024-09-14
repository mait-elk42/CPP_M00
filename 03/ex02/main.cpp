/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:19:51 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 17:48:00 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Android("Android");
	FragTrap Ios("IOS");
	int i = 0;
	while ( i++ < 10 )
	{
		Android.attack(Ios.getName());
		Ios.takeDamage(Android.getAttackDamage());
	}
}