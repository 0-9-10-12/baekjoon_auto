#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int input{};
	std::cin >> input;

	int temp[100]{ 0, 1, 2, 4 };

	for (int i{ 4 }; i < 12; ++i)
		temp[i] = temp[i - 1] + temp[i - 2] + temp[i - 3];

	int num{};
	for (int i{}; i < input; ++i) {
		std::cin >> num;
		std::cout << temp[num] << "\n";
	}
}
