#include <iostream>
#include <math.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n;
	while(std::cin >> n) {
		if (n == 0) {
			break;
		}

		int ans{};
		for (int i{}; i < n; ++i) {
			ans += std::pow(n - i, 2);
		}

		std::cout << ans << "\n";
	}
}