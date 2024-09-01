/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:01:12 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/28 18:04:55 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int num_zombies = 5;
	Zombie *zombies = zombieHorde(num_zombies, "ZOMBIEEEE");
	if (zombies == NULL)
		return (1);
	int i = 0;
	while (i < num_zombies)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
}