#include <iostream>
#include <string>

enum {RED, YELLOW, AMBER=YELLOW, GREEN};

int main()
{
	std::cout << "Red is under number" << RED << std::endl;
	std::cout << "Yellow is under number" << YELLOW << std::endl;
	std::cout << "Amber is under number" << AMBER << std::endl;
	std::cout << "Green is under number" << GREEN << std::endl; 	
}
