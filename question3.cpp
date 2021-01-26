#include <iostream>
#include <string>
#include <vector> 

void print_word(char array[], int count)
{
	for(int i = 0; i < count; i++)
	{
		std::cout << array[i];
	}
}

int main()
{
	std::vector<char> words;
	std::string sentence;
	std::cout << "Enter word: ";
	std::cin >> sentence;
	
	char array [100];

	int count = 0;
	for(char c : sentence)
	{
                if(c != '-')
		{
			array[count] = c;
			count++;
		}
		else if(c == '\0')
		{
			std::cout << "[" << count << "]" << " ";
			print_word(array,count);
			std::cout << std::endl;
		        count = 0;	
		}
		else
		{
                        std::cout << "[" << count << "]" << " ";
			print_word(array,count);
			std::cout << std::endl;
	        	count = 0;
		} 
	}	
}
