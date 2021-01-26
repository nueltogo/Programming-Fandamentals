#include <iostream>
#include <string>

int main()
{
	typedef std::string ten_strings[10];
	ten_strings test_array;
	std::string word;
	for(int i = 0; i < 10; i++)
	{
		std::string word;
		std::cout << "Enter Word: ";
		std::cin >> word;	
		test_array[i]=word;
	}
	
	int size = 0;

	for(int i =0; i < 10; i++)
	{
		int newSize = test_array[i].size();
		
		if(size < newSize)
		{
			word = test_array[i];
			size = newSize;
		}
	}
	std::cout <<"Word with the largest size is: " << word <<std::endl;
}
