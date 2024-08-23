/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:56:40 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/22 16:56:40 by mait-elk         ###   ########.fr       */
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

bool	PhoneBook::is_valid_num(std::string usrin)
{
	for (size_t i = 0; i < usrin.length(); i++)
	{
		if (!std::isdigit(usrin[i]))
			return (false);
	}
	return (true);
}

void PhoneBook::add_new()
{
	std::string	usrin;
	Contact		contact;

	std::cout << "\nEnter Informations : " << std::endl;
	while (!(std::cin.eof()))
	{
		if ((usrin = read_input("\033[2K\tFirst Name >")) != "")
		{
			std::cout << "\x1b[A\033[32mOK   \033[0m" << std::endl;
			break;
		}
		std::cout << "\x1b[A" << std::flush;
	}
	contact.set_first_name(usrin);
	while (!(std::cin.eof()))
	{
		if ((usrin = read_input("\033[2K\tLast Name >")) != "")
		{
			std::cout << "\x1b[A\033[32mOK   \033[0m" << std::endl;
			break;
		}
		std::cout << "\x1b[A" << std::flush;
	}
	contact.set_last_name(usrin);
	while (!(std::cin.eof()))
	{
		if ((usrin = read_input("\033[2K\tNickName >")) != "")
		{
			std::cout << "\x1b[A\033[32mOK   \033[0m" << std::endl;
			break;
		}
		std::cout << "\x1b[A" << std::flush;
	}
	contact.set_nick_name(usrin);
	while (!(std::cin.eof()))
	{
		if ((usrin = read_input("\033[2K\tPhone Number >")) != "" && is_valid_num(usrin))
		{
			std::cout << "\x1b[A\033[32mOK   \033[0m" << std::endl;
			break;
		}
		std::cout << "\x1b[A" << std::flush;
	}
	contact.set_number(usrin);
	while (!(std::cin.eof()))
	{
		if ((usrin = read_input("\033[2K\tDarkest Secret >")) != "")
		{
			std::cout << "\x1b[A\033[32mOK   \033[0m" << std::endl;
			break;
		}
		std::cout << "\x1b[A" << std::flush;
	}
	contact.set_secret(usrin);
	if (std::cin.eof())
		return ;
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
