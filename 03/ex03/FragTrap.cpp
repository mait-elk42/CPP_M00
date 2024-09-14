/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:26 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 17:54:27 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << C_GREEN << this->getName() << "\t: Default Constructor Called 🧩 [FragTrap]" << C_DEFAULT << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	std::cout << C_GREEN << this->getName() << "\t: Constructor Called 🧩 [FragTrap]" << C_DEFAULT << std::endl;
}
FragTrap::~FragTrap() {
	std::cout << C_RED << this->getName() << "\t: Deconstructor Called 💣 [FragTrap]" << C_DEFAULT << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy) {
	if (&copy != this)
		*this = copy;
}
FragTrap&	FragTrap::operator=(const FragTrap &copy) {
	if (&copy != this)
		;
	return *this;
}
void	FragTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0)
	{
		std::cout << C_YELLOW << this->getName() << "\t: Attacks " << target << "\t-" << this->getAttackDamage() << C_DEFAULT" 🤜" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() -1);
	}
}
void		FragTrap::guardGate() {
	std::cout << "I CANNOT UNDERSTAND THIS :]" << std::endl;
}

void		FragTrap::highFivesGuys( void ) {
	std::cout << "HIGH FIVE ? :]" << std::endl;
}