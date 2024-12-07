#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int input{};
	std::cin >> input;
	
	for (int i{}; i < input; ++i) {
		for (int j{}; j < i + 1; ++j) {
			std::cout << "*";
		}
		for (int k{}; k < input * 2 - (i + 1) * 2; ++k) {
			std::cout << " ";
		}
		for (int l{}; l < i+ 1; ++l) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	for (int i{1}; i < input; ++i) {
		for (int j{input}; j > i; --j) {
			std::cout << "*";
		}
		for (int k{}; k < i * 2; ++k) {
			std::cout << " ";
		}
		for (int l{input}; l > i; --l) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}