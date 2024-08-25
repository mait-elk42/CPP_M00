/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:03:37 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/25 09:39:03 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl 
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
			Harl();
			~Harl();
	void	complain(std::string level);
};