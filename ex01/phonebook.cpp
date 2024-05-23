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

void PhoneBook::add_contact(Contact contact)
{
    contacts[contacts_count % 8] = contact;
    contacts_count++;
}
