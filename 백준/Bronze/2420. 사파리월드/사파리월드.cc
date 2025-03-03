#include <iostream>
#include <math.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	long long x, y;
	std::cin >> x >> y;

	std::cout << std::abs(y - x);
}