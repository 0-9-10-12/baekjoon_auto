#include <iostream>
#include <vector>
#include <algorithm>
//#include <ranges>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int count{};
	std::cin >> count;

	std::vector<int> v;

	int input{};
	for (int i{}; i < count; ++i) {
		std::cin >> input;
		v.push_back(input);
	}
	
	//std::ranges::sort(v);
	std::sort(v.begin(), v.end());

	for (const int& i : v)
		std::cout << i << "\n";
}