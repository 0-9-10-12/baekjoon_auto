#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int A{}, P{}, C{};
	std::cin >> A >> P >> C;

	int ans{};

	ans = P;

	if (A + C > P) {
		ans = A + C;
	}

	std::cout << ans;
}