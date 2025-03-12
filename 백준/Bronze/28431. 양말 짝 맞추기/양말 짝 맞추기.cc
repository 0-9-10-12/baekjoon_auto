#include <iostream>
#include <map>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::map<int, int> m{{0, 0}, { 1, 0 }, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}};

	for (int i{}; i < 5; ++i) {
		int n;
		std::cin >> n;

		++m[n];
	}

	for (auto a : m) {
		if (a.second % 2 == 1) {
			std::cout << a.first;
		}
	}
}