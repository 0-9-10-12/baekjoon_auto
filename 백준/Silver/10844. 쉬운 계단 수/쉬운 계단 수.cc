#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int cache[101][10]{};
	for (int i{1}; i < 10; ++i)
		cache[1][i] = 1;

	int input{};
	std::cin >> input;

	for (int i{2}; i < input + 1; ++i) {
		for (int j{}; j < 10; ++j) {
			if (0 == j)
				cache[i][j] = cache[i - 1][j + 1];
			else if (9 == j)
				cache[i][j] = cache[i - 1][j - 1];
			else 
				cache[i][j] = cache[i - 1][j - 1] + cache[i - 1][j + 1];

			cache[i][j] %= 1'000'000'000;
		}
	}

	int answer{};
	for (int i{}; i < 10; ++i)
		answer = (answer + cache[input][i]) % 1'000'000'000;
	std::cout << answer;
}