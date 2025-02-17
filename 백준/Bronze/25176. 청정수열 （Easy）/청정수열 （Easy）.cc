#include <iostream>
#include <string>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{};
	std::cin >> N;

	int ans{1};
	for (int i{1}; i < N + 1; ++i) {
		ans *= i;
	}

	std::cout << ans;
}
