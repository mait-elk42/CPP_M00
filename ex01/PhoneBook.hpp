/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:57:45 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/22 16:57:45 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

std::string	read_input(std::string msg);

class PhoneBook
{
private:
	Contact contacts[8];
	int	contacts_count;
public:
	PhoneBook();
	~PhoneBook();
	void	add_new();
	void	print();
	bool	is_valid_num(std::string usrin);
};

#endif