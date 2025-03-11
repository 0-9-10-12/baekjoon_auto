#include <iostream>
#include <math.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int K;
	std::cin >> K;

	for (int i{}; i < K; ++i) {
		int x, y;
		std::cin >> x >> y;

		std::cout << "Data Set " << i + 1 << ":\n";

		if (x <= y) {
			std::cout << "no drought\n\n";
			continue;
		}
		
		double r = (double)x / y;
		int count{};

		while(r > 5) {
			r /= 5;
			++count;
		}		
		
		if (count == 0) {
			std::cout << "drought\n\n";
		}
		else {
			for (int j{}; j < count; ++j) {
				std::cout << "mega ";
			}
			std::cout << "drought\n\n";
		}
	}
}