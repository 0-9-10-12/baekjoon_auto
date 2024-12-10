#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y;
	std::cin >> x >> y;

	int day[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int count = 365;
	int sum{};

	for (int i{}; i < x - 1; ++i) {
		sum += day[i];
	}
	sum += y;

	switch (sum % 7)
	{
	case 0:
		std::cout << "SUN";
		break;
	case 1:
		std::cout << "MON";
		break;
	case 2:
		std::cout << "TUE";
		break;
	case 3:
		std::cout << "WED";
		break;
	case 4:
		std::cout << "THU";
		break;
	case 5:
		std::cout << "FRI";
		break;
	case 6:
		std::cout << "SAT";
		break;
	}
}
