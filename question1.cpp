#include <iostream>
#include <iostream>

int main()
{
	std::string word;

	std::cout << "Please enter word: " << std::endl;
	std::cin >> word;
	const char * word_char;
	word_char = word.c_str();

	while(*word_char!='\0')
	{
		std::cout << *word_char << std::endl;
		word_char++;
	}
	
}
