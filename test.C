#include <iostream>
#include <string>
#include "mystring.C"
using namespace my;

int main()
{
	char myname[] {"Nunana Elorm Togo"};
	char yoursname[11] {};
	toupper(myname);
	std::cout << myname << std::endl;
}
