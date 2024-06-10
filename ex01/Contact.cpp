/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:52:15 by mait-elk          #+#    #+#             */
/*   Updated: 2024/05/23 14:52:15 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 * Constructor
*/
Contact::Contact()
{
	
}

/**
 * Destructor
*/
Contact::~Contact()
{
	
}

/**
 * Getters
*/
std::string	Contact::get_first_name(bool optimized)
{
	if (optimized == true)
	{
		if (first_name.length() > 10)
		{
			std::string ret = first_name.substr(0, 9);
			ret.append(".");
			return (ret);
		}
		if (first_name.length() < 10)
		{
			int spaces = 10 - first_name.length();
			while (spaces--)
				first_name.append(" ");
		}
	}
	return first_name;
}
std::string	Contact::get_last_name(bool optimized)
{
	if (optimized == true)
	{
		if (last_name.length() > 10)
		{
			std::string ret = last_name.substr(0, 9);
			ret.append(".");
			return (ret);
		}
		if (last_name.length() < 10)
		{
			int spaces = 10 - last_name.length();
			while (spaces--)
				last_name.append(" ");
		}
	}
	return last_name;
}
std::string	Contact::get_nick_name(bool optimized)
{
	if (optimized == true)
	{
		if (nick_name.length() > 10)
		{
			std::string ret = nick_name.substr(0, 9);
			ret.append(".");
			return (ret);
		}
		if (nick_name.length() < 10)
		{
			int spaces = 10 - nick_name.length();
			while (spaces--)
				nick_name.append(" ");
		}
	}
	return nick_name;
}
std::string	Contact::get_number(bool optimized)
{
	if (optimized == true)
	{
		if (number.length() > 10)
		{
			std::string ret = number.substr(0, 9);
			ret.append(".");
			return (ret);
		}
		if (number.length() < 10)
		{
			int spaces = 10 - number.length();
			while (spaces--)
				number.append(" ");
		}
	}
	return number;
}
std::string	Contact::get_secret(bool optimized)
{
	if (optimized == true)
	{
		if (secret.length() > 10)
		{
			std::string ret = secret.substr(0, 9);
			ret.append(".");
			return (ret);
		}
		if (secret.length() < 10)
		{
			int spaces = 10 - secret.length();
			while (spaces--)
				secret.append(" ");
		}
	}
	return secret;
}

/**
 * Setters
*/
void	Contact::set_first_name(std::string newvalue){ this->first_name = newvalue; }
void	Contact::set_last_name(std::string newvalue){ this->last_name = newvalue; }
void	Contact::set_nick_name(std::string newvalue){ this->nick_name = newvalue; }
void	Contact::set_number(std::string newvalue){ this->number = newvalue; }
void	Contact::set_secret(std::string newvalue){ this->secret = newvalue; }