#include <iostream>
#include <string>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{}, K{};
	std::cin >> N >> K;

	for (int i{N - 1}; i > 0; --i) {
		K /= 2;
	}

	std::cout << K;
}