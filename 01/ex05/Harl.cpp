/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:05:31 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/25 10:06:11 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
	
}

void	Harl::debug()
{
	std::cout << "Debug :)" << std::endl;
}
void	Harl::info()
{
	std::cout << "Info :)" << std::endl;
}
void	Harl::warning()
{
	std::cout << "Warning :(" << std::endl;
}
void	Harl::error()
{
	std::cout << "Error :(" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*_fncs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string _levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4)
	{
		if (level == _levels[i])
		{
			(this->*_fncs[i])();
			break;
		}
		i++;
	}
}