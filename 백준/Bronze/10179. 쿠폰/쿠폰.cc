#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{};
	std::cin >> N;
	for (int i{}; i < N; ++i) {
		double price{};
		std::cin >> price;

		std::cout << std::fixed;
		std::cout.precision(2);

		std::cout << "$" << price * 0.8 << "\n";
	}
}
