#include <iostream>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::vector<char> v;

	int n;
	std::cin >> n;

	for (int i{}; i < n; ++i) {
		char c;
		std::cin >> c;
		v.push_back(c);
	}

	char me;
	std::cin >> me;

	int cnt{};
	for (std::vector<char>::iterator iter{v.begin()}; iter != v.end(); ++iter) {
		if (*iter == me) {
			++cnt;
		}
	}

	std::cout << cnt;
}