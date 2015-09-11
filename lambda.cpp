#include <iostream>
#include <complex>

int main()
{
	auto func = [](auto input){return input*input;};
	std::cout<<func(10.12)<<std::endl;
	std::cout<<func(std::complex<double>(2,-2))<<std::endl;
	return 0;
}
