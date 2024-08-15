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
		std::cout << "\033[31mError: Empty Field. [ First Name ]\033[0m" << std::endl;
		return ;
	}
	contact.set_first_name(usrin);
	if ((usrin = read_input("\tLast Name > ")) == "")
	{
		std::cout << "\033[31mError: Empty Field. [ Last Name ]\033[0m" << std::endl;
		return ;
	}
	contact.set_last_name(usrin);
	if ((usrin = read_input("\tNickName > ")) == "")
	{
		std::cout << "\033[31mError: Empty Field. [ NickName > ]\033[0m" << std::endl;
		return ;
	}
	contact.set_nick_name(usrin);
	if ((usrin = read_input("\tPhone Number > ")) == "")
	{
		std::cout << "\033[31mError: Empty Field. [ Phone Number ]\033[0m" << std::endl;
		return ;
	}
	contact.set_number(usrin);
	if ((usrin = read_input("\tDarkest Secret > ")) == "")
	{
		std::cout << "\033[31mError: Empty Field. [ Darkest Secret ]\033[0m" << std::endl;
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
	for (int i = 0; i < ((contacts_count <= 8) ? contacts_count : 8); i++)
	{
		std::cout << "| "<< i + 1 << "        |" << contacts[i].get_first_name(1) << "|" << contacts[i].get_last_name(1)  << "|" << contacts[i].get_nick_name(1)  << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	while (!std::cin.eof())
	{
		bool	is_valid_index = true;
		std::string in = read_input("Enter Index Of Contact : ");
		
		for (size_t i = 0; i < in.length(); i++)
		{
			if (!std::isdigit(in.c_str()[i]))
			{
				std::cout << "\033[31mError: expected numeric input [that means no signs and no antoher letters]\033[0m" << std::endl;
				is_valid_index = false;
				break;
			}
		}
		if (is_valid_index && in.length() != 1)
		{
			is_valid_index = false;
			std::cout << "\033[31mError: your input should be 1 digit !\033[0m" << std::endl;
		}
		if (is_valid_index)
		{
			int max_c = ((contacts_count <= 8) ? contacts_count : 8);
			int index = std::stoi(in);
			if (index <= max_c && index > 0)
			{
				std::cout << "first name : " << contacts[index -1].get_first_name(false) << std::endl;
				std::cout << "last name : " << contacts[index -1].get_last_name(false) << std::endl;
				std::cout << "nickname : " << contacts[index -1].get_nick_name(false) << std::endl;
				std::cout << "phone number : " << contacts[index -1].get_number(false) << std::endl;
				std::cout << "dark secret : " << contacts[index -1].get_secret(false) << std::endl;
				break;
			}
			else {
				std::cout << "\033[31mError: Bad Index\n\tExpected digit from 1 to " << max_c << " \033[0m" <<  std::endl;
			}
		}
	}
}
