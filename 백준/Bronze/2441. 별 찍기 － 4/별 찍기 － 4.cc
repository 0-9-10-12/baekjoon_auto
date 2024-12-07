#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int input{};
	std::cin >> input;
	
	for (int i{0}; i < input; ++i) {
		for (int j{}; j < i; ++j) {
			std::cout << " ";
		}
		for (int k{input}; k > i; --k) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}