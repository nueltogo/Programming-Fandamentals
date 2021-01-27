#include <iostream>

typedef int* array[2];

int * input()
{
	int val1;
	int val2;
	static int val_array[2];
	std::cout << "Please enter two values: " << std::endl;
	std::cin >> val1 >> val2 ;

	val_array[0] = val1;
	val_array[1] = val2;
	return val_array;
}
void add_two_values()
{
	int* address;
        address	= input();
	int result = (*address) + *(address+1);
	std::cout << "The result is: " << result << std::endl;
}

int main()
{
	add_two_values();
}

