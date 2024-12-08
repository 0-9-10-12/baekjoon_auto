#include <iostream>

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int input{};
	std::cin >> input;
	
	for (int i{}; i < input; ++i) {
		int a{}, b{};
		std::cin >> a >> b;
		std::cout << "Case #" << i + 1 << ": "<< a << " + " << b << " = " << a + b << '\n';
	}
}