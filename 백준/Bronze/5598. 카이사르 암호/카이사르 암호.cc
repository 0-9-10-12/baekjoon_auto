#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::string s;
	std::cin >> s;

	for (std::string::iterator si{s.begin()}; si != s.end(); ++si) {
		if (*si - 3 == 62) {
			std::cout << 'X';
			continue;
		}

		if (*si - 3 == 63) {
			std::cout << 'Y';
			continue;
		}

		if (*si - 3 == 64) {
			std::cout << 'Z';
			continue;
		}

		std::cout << (char)(*si - 3);
	}
}