/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:01:12 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/30 09:56:29 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string old_content = "";
		std::ifstream infile(av[1]);
		if (!infile.is_open())
		{
			std::cerr << "Cannot Read From File : [" << av[1] << "]" << std::endl;
			return (1);
		}
		while ( !infile.eof() )
		{
			std::string s;
			std::getline(infile, s);
			old_content.append(s);
			if (!infile.eof())
				old_content.append("\n");
		}
		infile.close();

		std::ofstream outfile(std::string(av[1]) + ".replace");
		std::string from = av[2];
		std::string to = av[3];
		int i = 0;
		while (old_content[i] != '\0')
		{
			if (old_content[i] == from[0])
			{
				size_t j = 0;
				while (old_content[i + j] != '\0' && old_content[i + j] == from[j])
					j++;
				if (j == from.length())
				{
					outfile << to << std::flush;
					i += j;
				}
				else {
					outfile << old_content[i] << std::flush;
					i++;
				}
			}
			else {
				outfile << old_content[i] << std::flush;
				i++;
			}
		}
		outfile.close();
	}
}
