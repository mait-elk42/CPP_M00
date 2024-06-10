/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:50:48 by mait-elk          #+#    #+#             */
/*   Updated: 2024/05/23 14:50:48 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};

#endif