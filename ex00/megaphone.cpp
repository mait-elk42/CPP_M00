#include <iostream>
void put_in_screen(char c)
{
	if (c >= 'a' && c <= 'z')
		    c = c + 'A'-'a';
	std::cout << c;
}

int main(int c, char **v)
{
	if (c == 1)
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	    else
		{
			int i = 1;
			int j = 0;
	        while (i < c)
	        {
				j = 0;
	            while(v[i][j])
	                put_in_screen(v[i][j++]);
	            i++;
			}
			std::cout << std::endl;
		}
}
