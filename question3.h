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

void output(char * i)
{
	std::cout << "This is an string: " << i << ": ";
	while(*i != '\0')
	{
		std::cout << *i;
		i++;
	}
	std::cout << std::endl;
}

void output(char * i,int count)
{
	std::cout << "This is an string : " << i << ": ";
	for(int h=0; h < count; h++ )
	{
		std::cout << *i;
		i++;
	}
	std::cout << std::endl;
}

void output(char * i,int count, int last)
{
	std::cout << "This is an string: " << i << ": ";
	i+=count;
	for(int h=count; h < count+last; h++)
	{
		std::cout << *i;
		i++;
	}
	std::cout << std::endl;
}
