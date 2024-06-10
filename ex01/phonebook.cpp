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
	if (contacts_count == 0)
	{
		std::cout << "Your Contact Is Still Empty." << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < contacts_count; i++)
	{
		std::cout << "| "<< i +1 << "        |" << contacts[i].get_first_name(1) << "|" << contacts[i].get_last_name(1)  << "|" << contacts[i].get_nick_name(1)  << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	while (!std::cin.eof())
	{
		bool	is_valid_index = true;
		std::string in = read_input("Enter Index Of Contact You Want : ");
		
		for (int i = 0; i < in.length(); i++)
		{
			if (!std::isdigit(in.c_str()[i]))
			{
				std::cout << "invalid index" << std::endl;
				is_valid_index = false;
				break;
			}
		}
		if (in.length() == 0)
			is_valid_index = false;
		if (is_valid_index)
		{
			int index = std::stoi(in);
			if (index <= contacts_count && index > 0)
			{
				std::cout << "first name : " << contacts[index -1].get_first_name(false) << std::endl;
				std::cout << "last name : " << contacts[index -1].get_last_name(false) << std::endl;
				std::cout << "nickname : " << contacts[index -1].get_nick_name(false) << std::endl;
				std::cout << "phone number : " << contacts[index -1].get_number(false) << std::endl;
				std::cout << "dark secret : " << contacts[index -1].get_secret(false) << std::endl;
				break;
			}else{
				std::cout << "Bad Index" << std::endl;
			}
		}
	}
}
