/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:05:31 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/28 17:54:53 by mait-elk         ###   ########.fr       */
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
	bool	save = false;
	void (Harl::*_fncs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string _levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4)
	{
		if (level == _levels[i] || save == true)
		{
			switch (i)
			{
				case 0:
					std::cout << "\n[ DEBUG ]" << std::endl;
				break;
				case 1:
					std::cout << "\n[ INFO ]" << std::endl;
				break;
				case 2:
					std::cout << "\n[ WARNING ]" << std::endl;
				break;
				case 3:
					std::cout << "\n[ ERROR ]" << std::endl;
				default:
					break;
				break;
			}
			(this->*_fncs[i])();
			save = true;
		}
		i++;
	}
}