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
std::string	Contact::get_first_name(){ return first_name; }
std::string	Contact::get_last_name(){ return last_name; }
std::string	Contact::get_nick_name(){ return nick_name; }
std::string	Contact::get_number(){ return number; }		
std::string	Contact::get_secret(){ return secret; }		

/**
 * Setters
*/
void	Contact::set_first_name(std::string newvalue){ this->first_name = newvalue; }
void	Contact::set_last_name(std::string newvalue){ this->last_name = newvalue; }
void	Contact::set_nick_name(std::string newvalue){ this->nick_name = newvalue; }
void	Contact::set_number(std::string newvalue){ this->number = newvalue; }
void	Contact::set_secret(std::string newvalue){ this->secret = newvalue; }