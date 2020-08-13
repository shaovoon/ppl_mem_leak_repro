#include <iostream>
#include <vector>
#include <ppl.h>

int main()
{
	std::vector<int> vec(1000);
	memset(vec.data(), 0, vec.size() * sizeof(int));

	using namespace concurrency;
	parallel_for_each(vec.begin(), vec.end(), [&](int& num) {
		++num;
		});

    std::cout << "Done!\n";
}
