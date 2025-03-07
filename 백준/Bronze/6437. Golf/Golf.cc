#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int p, s;
	int count{1};
	while (std::cin >> p >> s) {
		if (0 == p) {
			break;
		}
		std::cout << "Hole #" << count << "\n";
		++count;

		if (1 == s) {
			std::cout << "Hole-in-one.\n\n";
			continue;
		}
		if (s == p - 3) {
			std::cout << "Double eagle.\n\n";
			continue;
		}
		if (s == p - 2) {
			std::cout << "Eagle.\n\n";
			continue;
		}
		if (s == p - 1) {
			std::cout << "Birdie.\n\n";
			continue;
		}
		if (p == s) {
			std::cout << "Par.\n\n";
			continue;
		}
		if (s == p + 1) {
			std::cout << "Bogey.\n\n";
			continue;
		}

		std::cout << "Double Bogey.\n\n";
	}

}