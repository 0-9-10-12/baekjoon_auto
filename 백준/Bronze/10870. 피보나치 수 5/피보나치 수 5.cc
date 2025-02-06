#include <iostream>

int answer(int i) {
	
	if (0 == i) {
		return 0;
	}
	if (1 == i) {
		return 1;
	}

	return answer(i - 2) +  answer(i - 1);
}

int main() {
	int input{};

	std::cin >> input;

	int a{ answer(input) };

	std::cout << a;
}