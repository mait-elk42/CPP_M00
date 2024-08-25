/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:01:12 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/25 10:25:21 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string input = av[1];
		Harl h = Harl();
		if (input == "DEBUG" || input == "INFO" || input == "WARNING" || input == "ERROR")
			h.complain(input);
		else
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}