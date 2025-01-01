#include <iostream>

int test(int a);

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n, k;
	std::cin >> n >> k;
	
	std::cout << test(n) / test(n - k) / test(k);
}

int test(int a)
{
	if (1 == a)
		return 1;
	if (0 == a)
		return 1;

	return a * test(a - 1);
}
