#include <iostream>
#include <vector>
#include <ppl.h>
#include <algorithm>
#include <execution>

int main()
{
	std::vector<int> vec(1000);
	memset(vec.data(), 0, vec.size() * sizeof(int));

	/*
	// PPL parallel for_each has no memory leak
	using namespace concurrency;
	parallel_for_each(vec.begin(), vec.end(), [&](int& num) {
		++num;
		});
	*/
	/*
	// C++ 17 parallel for_each has no memory leak
	std::for_each(std::execution::par, vec.begin(), vec.end(), [&](int& num) {
		++num;
		});
	*/
	using namespace concurrency;
	parallel_for(0U, vec.size(), [&](unsigned int index) {
		++vec[index];
		});
	std::cout << "Done!\n";
}
