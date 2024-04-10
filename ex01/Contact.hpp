#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Contact{
private:
	string	first_name;
	string	last_name;
	string	nick_name;
	string	number;
	string	secret;
public:
	Contact();
	~Contact();
	//GETTERS					//SETTERS
	string	get_first_name();	void	set_first_name(string newvalue);
	string	get_last_name();	void	set_last_name(string newvalue);
	string	get_nick_name();	void	set_nick_name(string newvalue);
	string	get_number();		void	set_number(string newvalue);
	string	get_secret();		void	set_secret(string newvalue);
};

#endif