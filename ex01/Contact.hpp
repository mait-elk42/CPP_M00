/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:02:19 by mait-elk          #+#    #+#             */
/*   Updated: 2024/06/10 19:02:19 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	number;
	std::string	secret;
public:
	Contact();
	~Contact();

	/**
	 * Getters
	*/
	std::string	get_first_name(bool optimized);
	std::string	get_last_name(bool optimized);
	std::string	get_nick_name(bool optimized);
	std::string	get_number(bool optimized);
	std::string	get_secret(bool optimized);
	/**
	 * Setters
	*/
	void	set_first_name(std::string newvalue);
	void	set_last_name(std::string newvalue);
	void	set_nick_name(std::string newvalue);
	void	set_number(std::string newvalue);
	void	set_secret(std::string newvalue);
};

#endif