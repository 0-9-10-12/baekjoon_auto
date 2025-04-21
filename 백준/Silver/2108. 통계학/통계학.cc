#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <tuple>
#include <stack>
#include <cmath>

#define FastIO                      \
    std::ios::sync_with_stdio(false);    \
    std::cin.tie(NULL);                  \
    std::cout.tie(NULL);

void Solution();

int main() {
	FastIO;
	Solution();
}

void Solution()
{
	int n;
	std::cin >> n;

	std::map<int, int> m;
	int sum{};
	int max{-2147483647};
	int min{2147483647};
	int countMax{-2147483647};
	for (int i{}; i < n; ++i) {
		int k;
		std::cin >> k;

		if (k > max) {
			max = k;
		}

		if (k < min) {
			min = k;
		}

		sum += k;
		m[k]++;

		if (m[k] > countMax) {
			countMax = m[k];
		}
	}

	int ave = round(static_cast<double>(sum) / n);
	std::cout.precision(0);
	std::cout << ave << "\n";

	int target{(n - 1) / 2};
	int cumulative{};
	int median{};
	for (const auto &a : m) {
		if (cumulative + a.second > target) {
			median = a.first;
			break;
		}
		cumulative += a.second;
	}
	std::cout << median << "\n";

	std::vector<int> v;
	for (auto a : m) {
		if (a.second == countMax) {
			v.push_back(a.first);
		}
	}
	if (v.size() == 1) {
		std::cout << *v.begin() << "\n";
	}
	else {
		std::sort(v.begin(), v.end());
		std::cout << v.at(1) << "\n";
	}

	std::cout << max - min;
}
