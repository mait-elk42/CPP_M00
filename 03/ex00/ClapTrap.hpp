/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:28 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 14:50:32 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define C_YELLOW		"\033[33m"
#define C_GREEN			"\033[32m"
#define C_RED			"\033[31m"
#define C_DEFAULT		"\033[0m"

class ClapTrap {
private:
	std::string		Name;
	unsigned int	HitPoints;
	unsigned int	EnergyPoints;
	unsigned int	AttackDamage;
public:
				ClapTrap();
				ClapTrap(std::string Name);
				~ClapTrap();
				ClapTrap(const ClapTrap &copy);
	ClapTrap& 	operator=(const ClapTrap &copy);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	// getters 
	std::string		getName();
	unsigned int	getHitPoints();
	unsigned int	getEnergyPoints();
	unsigned int	getAttackDamage();
};
