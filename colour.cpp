#include <iostream>
#include <string>

enum {RED, YELLOW, AMBER=YELLOW, GREEN};

int main()
{
	int colour = RED;
	while (colour == RED)
	{

		std::cout << "The colour is red" << std::endl;
		std::cout << "Enter another number" << std::endl;
		std::cin >> colour; 
	}
	std::cout << "The colour has been changed" << std::endl;
}
