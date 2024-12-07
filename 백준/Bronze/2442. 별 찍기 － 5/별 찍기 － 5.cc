#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int input{};
	std::cin >> input;
	
	for (int i{1}; i < input + 1; ++i) {
		for (int j{i}; j < input; ++j) {
			std::cout << " ";
		}
		for (int k{}; k < i * 2 - 1; ++k) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}