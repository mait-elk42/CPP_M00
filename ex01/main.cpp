/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:42 by mait-elk          #+#    #+#             */
/*   Updated: 2024/05/23 15:00:42 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	read_input(std::string msg)
{
	std::string	usrin;

	std::cout << msg << "$> ";
	std::getline(std::cin, usrin);
	return (usrin);
}

int main()
{
	PhoneBook phonebook;
	std::string usr_input;

	while (!std::cin.eof() && usr_input != "EXIT")
	{
		usr_input = read_input("mait-elk@1337.phonebook [ADD,SEARCH,EXIT]: ");
		if (usr_input != "")
		{
			if (usr_input == "ADD")
				phonebook.add_new();
			if (usr_input == "SEARCH")
				phonebook.print();
		}
	}
	std::cout << "\nsee you later." << std::endl;
	return (0);
}