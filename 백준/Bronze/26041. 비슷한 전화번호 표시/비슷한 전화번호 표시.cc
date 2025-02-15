#include <iostream>
#include <string>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::vector<std::string> v;

	std::string N{};
	while (std::cin >> N) {
		v.push_back(N);
	}

	int Ans{};
	bool flag{false};
	for (const auto& a : v) {
		if (a == N || a.size() < N.size()) {
			continue;
		}
		for (int i{}; i < N.size(); ++i) {
			if (a[i] != N[i]) {
				flag = false;
				break;
			}
			flag = true;
		}
		if (flag) {
			++Ans;
			flag = false;
		}
	}

	std::cout << Ans;
}