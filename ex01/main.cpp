#include "PhoneBook.hpp"

string get_input(string msg)
{
    string s;

    cout << msg << endl;
    getline(cin, s);
    if (s != "")
        return (s);
    return (cout << "<A Saved Contact Can't Have Empty Fields>" << endl, get_input(msg));
}

void put_info(char *info)
{
    int i;

    i = 0;
    while (i < 10)
    {
        if (*info)
            cout << *info++;
        else
            cout << " ";
        i++;
    }
    cout << "| ";
}

void display_contact_info(Contact c, int i)
{

    cout << "| " << i << "         | ";
    put_info((char *)"hell");
    put_info((char *)"hell");
    cout << endl;
}

int main()
{
    PhoneBook book;
    string input;

    while (1)
    {
        cout << "mait-elk@1337.phonebook [ADD,SEARCH,EXIT]: ";
        getline(cin, input);
        if (input == "EXIT")
            break;
        if (input == "ADD")
        {
            Contact c;
            c.set_first_name(get_input("First Name : "));
            c.set_last_name(get_input("Last Name : "));
            c.set_nick_name(get_input("Nick Name : "));
            c.set_number(get_input("Phone Number : "));
            c.set_secret(get_input("Darkest Secret : "));
            book.add_contact(c);
        }
        if (input == "SEARCH") {
        cout << "+------------+------------+------------+------------+" << endl;
        cout << "| Index      | FirstName  | LastName   | NickName   |" << endl;
        cout << "+------------+------------+------------+------------+" << endl;
        cout << "| Index      | FirstName  | LastName   | NickName   |" << endl;
        cout << "+------------+------------+------------+------------+" << endl;
        int i;

        i = 0;
        while (i < 8)
        {
            display_contact_info(book.contacts[i], i);
            cout << "+------------+------------+------------+------------+" << endl;
            i++;
        }
    }
    }
    
    return (0);
}