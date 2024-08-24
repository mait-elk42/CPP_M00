/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:01:12 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/24 17:10:42 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string new_content;
		std::ifstream infile(av[1]);
		std::string from = av[2];
		std::string to = av[3];

		std::string line;
		while (!infile.eof())
		{
			std::getline(infile, line);
			std::string ltoadd = line;
			int	start = line.find(from);
			int	end = start + from.length();
			if (start > 0)
			{
				line.substr(0, start);
				// std::cout 
				line.append(to);
				ltoadd.substr(end, ltoadd.length() -1);
				line.append(ltoadd);
				ltoadd = line;
			}
			new_content.append(ltoadd);
			new_content.append("\n");
		}
		std::cout << new_content << std::endl;
		// char *bff = new char[10];
		// infile.read(bff, 100);
		// std::cout << bff << std::endl;
	}
}