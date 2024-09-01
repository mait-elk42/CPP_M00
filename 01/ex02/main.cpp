/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:01:12 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/28 17:50:06 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "&str :\t\t" << &str << std::endl;
	std::cout << "stringPTR :\t" << stringPTR << std::endl;
	std::cout << "stringREF :\t" << &stringREF << std::endl << std::endl;

	std::cout << "str :\t\t" << str << std::endl;
	std::cout << "stringPTR :\t" << *stringPTR << std::endl;
	std::cout << "stringREF :\t" << stringREF << std::endl;
}