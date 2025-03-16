#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int a, b;
	while (std::cin >> a >> b) {
		if (a == 0) {
			break;
		}

		if (a > b) {
			std::cout << "Yes\n";
		}
		else {
			std::cout << "No\n";
		}
	}
}