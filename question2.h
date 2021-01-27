#include <iostream>
#include <string>

void output(int i)
{
	std::cout << "This is an int: " << i << std::endl;
}

void output(char i)
{
	std::cout << "This is a char: " << i << std::endl;
}

void output(float i)
{
	std::cout << "This is a float: " << i << std::endl;
}

void output(long i)
{
	std::cout << "This is a long: " << i << std::endl;
}

void output(std::string i)
{
	std::cout << "This is an string: " << i << std::endl;
}

