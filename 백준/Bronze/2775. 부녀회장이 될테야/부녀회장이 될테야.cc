#include <iostream>

int getAns(int k, int n);

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int count{};
	std::cin >> count;

	for (int i{}; i < count; ++i) {
		int k{}, n{};
		std::cin >> k >> n;

		std::cout << getAns(k, n) << "\n";
	}
}

int getAns(int k, int n)
{
	if (1 == n)
		return 1;
	if (0 == k)
		return n;

	return (getAns(k - 1, n) + getAns(k, n - 1));
}