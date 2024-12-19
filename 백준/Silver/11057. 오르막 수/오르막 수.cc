#include <iostream>

int cache[1'001][10]{};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	for (int i{}; i < 10; i++)
		cache[1][i] = 1;
	
	int input{};
	std::cin >> input;

	int temp{};
	for (int i{2}; i < input + 1; ++i) {
		for (int j{}; j < 10; ++j) {
			temp += cache[i - 1][j] % 10'007;
			cache[i][j] = temp ;
			//std::cout << cache[i][j] << "\n";
		}
		temp = 0;
	}

	int ans{};
	for (int i{}; i < 10; ++i) {
		ans += cache[input][i];
	}

	std::cout << ans % 10'007;
}