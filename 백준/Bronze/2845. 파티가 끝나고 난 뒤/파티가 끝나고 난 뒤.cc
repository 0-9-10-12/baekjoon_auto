#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int L, P;
	int a, b, c, d, e;
	std::cin >> L >> P;
	std::cin >> a >> b >> c >> d >> e;


	std::cout << a - L * P << " ";
	std::cout << b - L * P << " ";
	std::cout << c - L * P << " ";
	std::cout << d - L * P << " ";
	std::cout << e - L * P;
}