/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:50:14 by mait-elk          #+#    #+#             */
/*   Updated: 2024/05/23 14:50:14 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contacts_count = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_new()
{
	std::string	usrin;
	Contact		contact;

	std::cout << "\nEnter Informations : " << std::endl;
	if ((usrin = read_input("\tFirst Name > ")) == "")
	{
		std::cout << "Empty Field. [ First Name ]" << std::endl;
		return ;
	}
	contact.set_first_name(usrin);
	if ((usrin = read_input("\tLast Name > ")) == "")
	{
		std::cout << "Empty Field. [ Last Name ]" << std::endl;
		return ;
	}
	contact.set_last_name(usrin);
	if ((usrin = read_input("\tNickName > ")) == "")
	{
		std::cout << "Empty Field. [ NickName > ]" << std::endl;
		return ;
	}
	contact.set_nick_name(usrin);
	if ((usrin = read_input("\tPhone Number > ")) == "")
	{
		std::cout << "Empty Field. [ Phone Number ]" << std::endl;
		return ;
	}
	contact.set_number(usrin);
	if ((usrin = read_input("\tDarkest Secret > ")) == "")
	{
		std::cout << "Empty Field. [ Darkest Secret ]" << std::endl;
		return ;
	}
	contact.set_secret(usrin);
	std::cout << "New Contact Added Successfully." << std::endl;
	contacts[contacts_count % 8] = contact;
	contacts_count++;
}

void PhoneBook::print()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 1; i <= 8; i++)
	{
		std::cout << "| "<< i << "        |" << contacts[i-1].get_first_name(1) << "|" << contacts[i-1].get_last_name(1)  << "|" << contacts[i-1].get_nick_name(1)  << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
}
