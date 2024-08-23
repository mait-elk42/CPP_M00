/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:52:29 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/22 16:52:29 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	read_input(std::string msg)
{
	std::string	usrin;

	std::cout << msg << " ";
	std::getline(std::cin, usrin);
	return (usrin);
}

int main()
{
	PhoneBook phonebook;
	std::string usr_input;

	std::system("clear");
	std::cout << "                                    " << std::endl;
	std::cout << "    _                 _             " << std::endl;
	std::cout << "   |_)|_  _ __  _    |_) _  _  |    " << std::endl;
	std::cout << "   |  | |(_)| |(/_   |_)(_)(_) |<   " << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "                                    " << std::endl;
	std::cout << "                                    " << std::endl;
	std::cout << std::endl;
	while (!std::cin.eof() && usr_input != "EXIT")
	{
		usr_input = read_input("mait-elk@1337.phonebook $> ");
		if (usr_input != "")
		{
			if (usr_input == "ADD")
				phonebook.add_new();
			if (usr_input == "SEARCH")
				phonebook.print();
		}
	}
	std::cout << "\nsee you later." << std::endl;
	return (0);
}


// int main() {
//     int total = 100;

//     for (int i = 0; i <= total; ++i) {
//         std::cout << "\rSaving: " << i << "%" << std::flush;
// 		std::__libcpp_thread_sleep_for(std::__1::chrono::nanoseconds(100000000));
//     }

//     std::cout << std::endl; // Move to the next line after the loop is done
//     return 0;
// }