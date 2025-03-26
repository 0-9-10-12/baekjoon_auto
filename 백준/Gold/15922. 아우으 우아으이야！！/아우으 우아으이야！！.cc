#include <iostream>
#include <vector>

struct MyStruct
{
	int x;
	int y;
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	std::vector<MyStruct> v;

	int x{-1'000'000'001}, y{-1'000'000'001};
	for (int i{}; i < N; ++i) {
		MyStruct ms;
		std::cin >> x;
		ms.x = x;
		if (x < y) {
			ms.x = v.back().x;

			std::cin >> y;
			if (y < v.back().y) {
				y = v.back().y;
			}

			ms.y = y;
			v.pop_back();
			v.push_back(ms);
			continue;
		}

		std::cin >> y;
		ms.y = y;

		v.push_back(ms);
	}

	int ans{};
	for (auto a : v) {
		//std::cout << a.x << ", " << a.y << "\n";

		ans += a.y - a.x;
	}

	std::cout << ans;
}