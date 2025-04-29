#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int a, k;
	std::cin >> a >> k;

	std::vector<int> v;

	for (int i = 0; i < a; ++i) {
		int x;
		std::cin >> x;
		v.push_back(x);
	}

	std::sort(v.begin(), v.end());

	int count{};
	for (auto a : v) {
		count++;
		if (count == k) {
			std::cout << a << "\n";
			return 0;
		}
	}
}

