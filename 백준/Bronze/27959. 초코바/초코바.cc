#include <iostream>
#include <math.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N, M;
	std::cin >> N >> M;

	if (N * 100 >= M) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}
}