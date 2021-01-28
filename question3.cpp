#include <iostream>
#include "mystring.C"

const char password[] {"HASTA LA VISTA"};

int main()
{
	char pass[10] {};
	char temp[100];
	std::cout << "Enter password 1: ";
	std::cin >> temp;
	my::strcpy(pass, temp);
	my::strcat(pass, " ");
	std::cout << "ENTER password 2: ";
	std::cin >> temp;
	my::strcat(pass, temp);
	my::strcat(pass, " ");
	std::cout << "Enter password 3: ";
	std::cin >> temp;
	my::strcat(pass, temp);

	my::toupper(pass);
	
	int val = my::strcmp(pass, password);
	
	std::cout << pass << std::endl;

	if(val == 0)
	{
		std::cout << "You may go for coffee" << std::endl;
	}
	else
	{
		std::cout << "try again" << std::endl;
	}

}
