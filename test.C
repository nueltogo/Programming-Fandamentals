#include <iostream>
#include <string>
#include "mystring.h"

int main()
{
	const char myname[] {"Nunana Togo"};
	const char yourname[] {"Nunana Elorm Togo"};
	int val = strcmp2(myname, yourname);
	std::cout << val << std::endl;
}
