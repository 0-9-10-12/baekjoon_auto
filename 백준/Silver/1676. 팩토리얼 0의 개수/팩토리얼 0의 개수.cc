#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n{};
	std::cin >> n;

	int count{};
	for (int i{ 1 }; i <= n; ++i) {
		if (0 == i % 5)
			count++;
		if (0 == i % 25)
			count++;
		if (0 == i % 125)
			count++;
	}

	std::cout << count;
}