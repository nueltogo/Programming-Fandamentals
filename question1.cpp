#include <iostream>

int* dynallocint()
{
	int *pointer {new int};
	std::cout << "Please Enter a number: ";
	std::cin >> *pointer;
	return pointer;
}	

int main()
{
	int* num {dynallocint()};
	std::cout << *num << std::endl;
	delete num;
}
