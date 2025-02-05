#include <iostream>

int answer(int i) {
	
	if (i <= 1) {
		return 1;
	}

	return i * answer(i - 1);
}

int main() {
	int input{};

	std::cin >> input;

	int a{ answer(input) };

	std::cout << a;
}