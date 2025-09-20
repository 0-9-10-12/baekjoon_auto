#include <iostream>

int main() {
	float a, b;
	std::cin >> a >> b;

	float bmi{a / (b * b)};

	if (bmi < 18.5) {
		std::cout << "Underweight";
	} else if (bmi <= 25) {
		std::cout << "Normal weight";
	} else {
		std::cout << "Overweight";
	}
}