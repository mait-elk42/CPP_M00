/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:26 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 17:52:34 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->Name = "Unknown";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << C_GREEN << this->Name << "\t: Default Constructor Called 🧩 [ClapTrap]" << C_DEFAULT << std::endl;
}
ClapTrap::ClapTrap(std::string Name) {
	this->Name = Name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << C_GREEN << this->Name << "\t: Constructor Called 🧩 [ClapTrap]" << C_DEFAULT << std::endl;
}
ClapTrap::~ClapTrap() {
	std::cout << C_RED << this->Name << "\t: Deconstructor Called 💣 [ClapTrap]" << C_DEFAULT << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << C_GREEN << this->Name << "\t: Copy Constructor Called 🧩 [ClapTrap]" << C_DEFAULT << std::endl;
	if (&copy != this)
		*this = copy;
}
ClapTrap&	ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << C_GREEN << this->Name << "\t: Copy Assignment Called 🧩 [ClapTrap]" << C_DEFAULT << std::endl;
	if (&copy != this)
	{
		this->Name = copy.Name;
		this->EnergyPoints = copy.EnergyPoints;
		this->HitPoints = copy.HitPoints;
		this->AttackDamage = copy.AttackDamage;
	}
	return *this;
}

void		ClapTrap::attack(const std::string& target) {
	if (this->EnergyPoints > 0)
	{
		std::cout << C_YELLOW << this->Name << "\t: Attacks " << target << "\t-" << this->AttackDamage << C_DEFAULT" 👊" << std::endl;
		this->EnergyPoints--;
	}
}
void		ClapTrap::takeDamage(unsigned int amount) {
	if (this->HitPoints >= amount)
	{
		std::cout << C_YELLOW << this->Name << "\t: Taking Damage -"  << amount  << C_DEFAULT" 🤕" << std::endl;
		this->HitPoints -= amount;
	}
}
void		ClapTrap::beRepaired(unsigned int amount) {
	if (this->EnergyPoints > 0)
	{
		std::cout << C_YELLOW << this->Name << "\t: Repairing ++" << amount << C_DEFAULT <<  std::endl;
		this->HitPoints += amount;
		this->EnergyPoints--;
	}
}

// GETTERS
std::string ClapTrap::getName()
{
	return (this->Name);
}
unsigned int	ClapTrap::getHitPoints() {
	return (this->HitPoints);
}
unsigned int	ClapTrap::getEnergyPoints() {
	return (this->EnergyPoints);
}
unsigned int	ClapTrap::getAttackDamage() {
	return (this->AttackDamage);
}

void			ClapTrap::setName(std::string Name) {
	this->Name = Name;
}
void			ClapTrap::setHitPoints(unsigned int HitPoints) {
	this->HitPoints = HitPoints;
}
void			ClapTrap::setEnergyPoints(unsigned int EnergyPoints) {
	this->EnergyPoints = EnergyPoints;
}
void			ClapTrap::setAttackDamage(unsigned int AttackDamage) {
	this->AttackDamage = AttackDamage;
}