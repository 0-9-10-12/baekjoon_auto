#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int input{};
	std::cin >> input;

	int temp[1'001]{0, 1, 2, 3};
	

	for (int i{3}; i < input + 1; ++i) {
		temp[i] = (temp[i - 1] + temp[i - 2]) % 10007;
		//std::cout << temp[i] << " = " << temp[i - 1] << " +  " << temp[i - 2] << "\n";
	}

	std::cout << temp[input];
}
