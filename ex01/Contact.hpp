#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
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
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nick_name();
	std::string	get_number();
	std::string	get_secret();
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