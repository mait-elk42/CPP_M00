#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
    contacts_count = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_contact(Contact contact)
{
    contacts[contacts_count % 8] = contact;
    contacts_count++;
}
