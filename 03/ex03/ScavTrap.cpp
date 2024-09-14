/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:26 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 17:39:37 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << C_GREEN << this->getName() << "\t: Default Constructor Called 🧩 [ScavTrap]" << C_DEFAULT << std::endl;
}
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	std::cout << C_GREEN << this->getName() << "\t: Constructor Called 🧩 [ScavTrap]" << C_DEFAULT << std::endl;
}
ScavTrap::~ScavTrap() {
	std::cout << C_RED << this->getName() << "\t: Deconstructor Called 💣 [ScavTrap]" << C_DEFAULT << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy) {
	if (&copy != this)
		*this = copy;
}
ScavTrap&	ScavTrap::operator=(const ScavTrap &copy) {
	if (&copy != this)
		;
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0)
	{
		std::cout << C_YELLOW << this->getName() << "\t: Attacks " << target << "\t-" << this->getAttackDamage() << C_DEFAULT" 🤜" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() -1);
	}
}
void		ScavTrap::guardGate() {
	std::cout << "I CANNOT UNDERSTAND THIS :]" << std::endl;
}