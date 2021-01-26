#include <iostream>
#include <string>


int main()
{
	int num;
	int *ptrnum;
	ptrnum = &num;
	int &refnum = num;
	constexpr int constnum=10;

	num = 5;
	std::cout << num << std::endl;
	(*ptrnum)++;
	std::cout << num << std::endl;
	refnum++;
	std::cout << num << std::endl;
//	constnum++;
	std::cout << constnum << std::endl;

	std::cout << 0xf3f2 << " " << 0437 << " " << 'a' << std::endl;

}
