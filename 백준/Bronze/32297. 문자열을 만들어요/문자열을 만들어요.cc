#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{};
	std::string s{};
	
	std::cin >> N >> s;
	for (int i{}; i < N - 3; ++i) {
		if (s[i] == 'g' && s[i + 1] == 'o' && s[i + 2] == 'r' && s[i + 3] == 'i') {
			std::cout << "YES";

			return 0;
		}
	}

	std::cout << "NO";

	return 0;
}