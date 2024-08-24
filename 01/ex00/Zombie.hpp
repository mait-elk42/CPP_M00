/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:05:59 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/24 11:29:47 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Zombie {
private:
	std::string name;
public:
			Zombie();
			Zombie(std::string name);
			~Zombie();
	void	announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);