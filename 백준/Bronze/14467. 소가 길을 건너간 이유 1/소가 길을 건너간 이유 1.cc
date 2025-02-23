#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct MyStruct
{
	int num{};
	std::vector<int> v{};
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{};
	MyStruct s[10 + 1]{};

	std::cin >> N;
	for (int i{}; i < N; ++i) {
		int num{}, loc{};
		std::cin >> num >> loc;

		s[num].num++;
		s[num].v.push_back(loc);
	}

	int ans{};
	for (MyStruct a : s) {
		if (a.v.size() == 1 || a.v.size() == 0) {
			continue;
		}
		for (int i{}; i < a.v.size() - 1; ++i) {
			if (a.v[i] != a.v[i + 1]) {
				++ans;
			}
		}
	}

	std::cout << ans;
}