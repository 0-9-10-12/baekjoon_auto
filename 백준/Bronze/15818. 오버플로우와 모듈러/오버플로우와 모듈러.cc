#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	long long M;

	std::cin >> N >> M;

	long long mul{1};
	for (int i{}; i < N; ++i) {
		long long a;
		std::cin >> a;

		mul = (mul * a) % M;
	}

	std::cout <<  mul;
}