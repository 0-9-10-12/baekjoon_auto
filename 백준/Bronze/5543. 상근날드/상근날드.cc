#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int p;
	
	int min{2147483647};
	for (int i{}; i < 3; ++i) {
		std::cin >> p;
		if (p < min) {
			min = p;
		}
	}

	int min2{2147483647};
	for (int i{}; i < 2; ++i) {
		std::cin >> p;
		if (p < min2) {
			min2 = p;
		}
	}

	std::cout << min + min2 - 50;
}