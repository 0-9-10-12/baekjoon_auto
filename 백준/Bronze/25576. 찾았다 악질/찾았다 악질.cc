#include <iostream>
#include <string>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{}, K{};
	std::vector<int> v;

	std::cin >> N >> K;

	for (int j{}; j < K; ++j) {
		int input{};
		std::cin >> input;
		v.push_back(input);
	}

	int count{};
	for (int i{}; i < N - 1; ++i) {
		int gap{};
		for (int j{}; j < K; ++j) {
			int input{};
			std::cin >> input;

			gap += std::abs(v[j] - input);
		}
		if (gap > 2'000) {
			++count;
		}
	}

	if (count * 2 >= ((N - 1))) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
}
