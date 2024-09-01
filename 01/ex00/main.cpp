/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:01:12 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/28 17:06:14 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("KING");
	zombie->announce();
	randomChump("ZOMBIE01");
	randomChump("ZOMBIE02");
	randomChump("ZOMBIE03");
	randomChump("ZOMBIE04");
	delete zombie;
}