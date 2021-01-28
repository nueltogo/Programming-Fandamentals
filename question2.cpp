#include <iostream>
#include <string>

std::string toggle()
{
	std::string state[] {"OFF", "ON"};
	static int tog  {0};
	if(tog == 0)
	{
		tog++;
		return state[0];
	}
	else
	{
		tog--;	
		return state[1];
	}
}

int main()
{
	int cont {1};
	while(cont){
		std::string current_state = toggle();
		std::cout << "The current state is: " << current_state << std::endl;
		std::cout << "Toggle again(Yes = 1, No = 0): ";
		std::cin >> cont;
	}
}	
