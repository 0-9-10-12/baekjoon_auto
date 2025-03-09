#include <iostream>
#include <math.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	std::cout << "The largest square has side length "<< static_cast<int>(std::sqrt(N)) << ".";
}