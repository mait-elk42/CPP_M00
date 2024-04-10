#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
// private:
public:
    Contact contacts[8];
    int     contacts_count;
    PhoneBook();
    ~PhoneBook();
    void    add_contact(Contact contact);
};

#endif