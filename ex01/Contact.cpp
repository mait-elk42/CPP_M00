#include "Contact.hpp"
//CONSTRACTOR
Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

//GETTERS													//SETTERS
string	Contact::get_first_name(){ return first_name; }		void	Contact::set_first_name(string newvalue){ first_name = newvalue; }
string	Contact::get_last_name(){ return last_name; }		void	Contact::set_last_name(string newvalue){ last_name = newvalue; }
string	Contact::get_nick_name(){ return nick_name; }		void	Contact::set_nick_name(string newvalue){ nick_name = newvalue; }
string	Contact::get_number(){ return number; }				void	Contact::set_number(string newvalue){ number = newvalue; }
string	Contact::get_secret(){ return secret; }				void	Contact::set_secret(string newvalue){ secret = newvalue; }