#include <iostream>

int main()
{
	auto func = [](auto input){return input*input;};
	std::cout<<func(10)<<std::endl;
	return 0;
}
