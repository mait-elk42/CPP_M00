/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:01:12 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/25 10:24:23 by mait-elk         ###   ########.fr       */
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

		if (!infile.is_open())
		{
			std::cout << "Cannot Read From File : [" << av[1] << "]" << std::endl;
			return (1);
		}
		std::string from = av[2];
		std::string to = av[3];

		std::string line;
		while (!infile.eof())
		{
			std::getline(infile, line);
			std::string ltoadd = line;
			int	start = line.find(from);
			int	end = start + from.length();
			// std::cout << "start:" << start << " end:" << end << std::endl;
			if (start > -1)
			{
				ltoadd = "";
				std::string chunk1 = line.substr(0, start);
				// std::cout << "chunk 1 : " << chunk1 << std::endl;
				std::string chunk2 = line.substr(end, line.length());
				// std::cout << "chunk 2 : " << chunk2 << std::endl;
				ltoadd.append(chunk1);
				ltoadd.append(to);
				ltoadd.append(chunk2);
			}
			// std::cout << "to_add : " << ltoadd << std::endl;
			new_content.append(ltoadd);
			if (!infile.eof())
				new_content.append("\n");
		}
		// std::cout << new_content << std::endl;
		infile.close();
		std::ofstream out(av[1] + ".replace");
		if (!out.is_open())
		{
			std::cout << "Cannot Write In File : [" << av[1] << "]" << std::endl;
			return (1);
		}
		out << new_content << std::flush;
	}
}