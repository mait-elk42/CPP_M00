/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:28 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 17:01:57 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
		// ADD YOUR VARIABLES
public:
	ScavTrap();
	ScavTrap(std::string Name);
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &copy);
	void		attack(const std::string& target);
	void		guardGate();
};
