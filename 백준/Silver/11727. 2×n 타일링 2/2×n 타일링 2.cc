#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int input{};
	std::cin >> input;

	int cache[1'001]{ 0, 1, 3 };

	for (int i{3}; i < input + 1; ++i) {
		cache[i] = (cache[i - 1] + cache[i - 2] * 2) % 10'007;
	}

	std::cout << cache[input];
}
