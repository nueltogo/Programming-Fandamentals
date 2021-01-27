#include <iostream>
#include <string>
#include "question3.h"

int main()
{
	char myname[] {"Nunana Elorm Togo"};
	char * mynameptr {myname};

	output(378854);
//	output("hi there");
	output(myname);
	output(myname,3);
	output(myname,3,4);
}
