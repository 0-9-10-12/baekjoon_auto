#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int x, y;
	std::cin >> x >> y;

	if (x > 0 && y > 0) {
		std::cout << 1;
	}
	if (x < 0 && y > 0) {
		std::cout << 2;
	}
	if (x < 0 && y < 0) {
		std::cout << 3;
	}
	if (x > 0 && y < 0) {
		std::cout << 4;
	}
}