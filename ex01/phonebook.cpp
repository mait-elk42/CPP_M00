#include <iostream>
#include <vector>

using namespace std;


/**
 * OOPS ALL OF THIS 5HIT SHOULD CHANGED BY CLASS>
 * I DID'NT READED THE SUBJECT
*/

// typedef struct s_phone
// {
// 	string fname;
// 	string lname;
// 	string nname;
// 	string num;
// } t_phone;

// void get_input(string &in)
// {
// 	cout << "mait-elk@phbook.ma -> ";
// 	getline(cin, in);
// }

// void print_data(t_phone phone)
// {
// 	char	*targ_loop;
// 	int		j;

// 	j = 0;
// 	targ_loop = (char *)phone.fname.c_str();
// 	cout << "| ";
// 	while (j < 9)
// 	{
// 		if (targ_loop && *targ_loop)
// 		{
// 			if (j == 8)
// 			{
// 				cout << ".";
// 				break;
// 			}
// 			else
// 				cout << *targ_loop++;
// 		}
// 		else
// 			cout << " ";
// 		j++;
// 	}
// 	cout << "  |" << "";
// 	j = 0;
// 	targ_loop = (char *)phone.lname.c_str();
// 	cout << " ";
// 	while (j < 9)
// 	{
// 		if (targ_loop && *targ_loop)
// 		{
// 			if (j == 8)
// 			{
// 				cout << ".";
// 				break;
// 			}
// 			else
// 				cout << *targ_loop++;
// 		}
// 		else
// 			cout << " ";
// 		j++;
// 	}
// 	cout << "  |" << "";
// 	j = 0;
// 	targ_loop = (char *)phone.nname.c_str();
// 	cout << " ";
// 	while (j < 9)
// 	{
// 		if (targ_loop && *targ_loop)
// 		{
// 			if (j == 8)
// 			{
// 				cout << ".";
// 				break;
// 			}
// 			else
// 				cout << *targ_loop++;
// 		}
// 		else
// 			cout << " ";
// 		j++;
// 	}
// 	cout << "  |" << "";
// 	j = 0;
// 	targ_loop = (char *)phone.num.c_str();
// 	cout << " ";
// 	while (j < 9)
// 	{
// 		if (targ_loop && *targ_loop)
// 		{
// 			if (j == 8)
// 			{
// 				cout << ".";
// 				break;
// 			}
// 			else
// 				cout << *targ_loop++;
// 		}
// 		else
// 			cout << " ";
// 		j++;
// 	}
// 	cout << "  |" << endl;
// }

// int read_info(string info, string &dest)
// {
// 	cout << "Enter "<< info << " :" << endl;
// 	getline(cin, dest); 
// 	if (dest == "")
// 	{
// 		cout << "[Field Cannot Be Empty]" << endl;
// 		return (0);
// 	}
// 	return (1);
// }

// int main()
// {
// 	vector<t_phone> nums;
// 	string in;

// 	while (1)
// 	{
// 		get_input(in);
// 		if (in == "E")
// 			break;
// 		if (in == "A")
// 		{
// 			t_phone phone = (t_phone){"", "", "", ""};
// 			if (read_info("First Name", phone.fname) && read_info("Last Name", phone.lname)
// 			&& read_info("Nick Name", phone.nname) && read_info("Phone Number", phone.num))
// 			{
// 				if ((nums.end() - nums.begin()) == 8)
// 					nums[0] = phone;
// 				else
// 					nums.push_back(phone);
// 			}
// 		}
// 		if (in == "S")
// 		{
// 			vector<t_phone>::iterator i = nums.begin();
// 			int index = 0;
// 			cout << "+---------------------------------------------------+" << endl;
// 			cout << "| Index      | First Name | Last Name  | NickName   |" << endl;
// 			cout << "+------------+------------+------------+------------+" << endl;
// 			while (i < nums.end())
// 			{
// 				print_data(*i);
// 				cout << "+------------+------------+------------+------------+" << endl;
// 				i++;
// 				index++;
// 			}
// 		}
// 	}
// }