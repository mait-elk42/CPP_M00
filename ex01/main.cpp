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

std::string	read_input()
{
    std::string usr_input;

    std::cout << "mait-elk@1337.phonebook [ADD,SEARCH,EXIT]: ";
    std::getline(std::cin, usr_input);
	return (usr_input);
}

int main()
{
    PhoneBook phonebook;
    std::string usr_input;

    while (1)
    {
		usr_input = read_input();
		std::cout << "entred : " << usr_input << std::endl;
    }
    
    return (0);
}