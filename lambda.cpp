#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
	std::vector<int> v(10);
	std::iota(v.begin(),v.end(),1);
	std::for_each(v.begin(),v.end(),  [](auto i){std::cout<<i<<" ";});

	std::sort(v.begin(),v.end(),[](auto i, auto j){return (i>j);});

	std::for_each(v.begin(),v.end(),  [](auto i){std::cout<<i<<" ";});

	return 0;
}
