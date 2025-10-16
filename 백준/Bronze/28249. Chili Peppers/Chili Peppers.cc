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
#include <queue>
#include <unordered_map>
#include <deque>

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

    std::unordered_map<std::string, std::pair<int, int>> m;
	m["Poblano"] = std::make_pair(1500, 0);
	m["Mirasol"] = std::make_pair(6000, 0);
	m["Serrano"] = std::make_pair(15500, 0);
	m["Cayenne"] = std::make_pair(40000, 0);
	m["Thai"] = std::make_pair(75000, 0);
	m["Habanero"] = std::make_pair(125000, 0);

    for (int i{}; i < n; ++i) {
        std::string s;
        std::cin >> s;

        for (auto& [key, value] : m) {
            if (s == key) {
                ++value.second;
            }
		}
    }

    int ans{};
    for (const auto& [key, value] : m) {
        ans += value.first * value.second;
    }

	std::cout << ans;
}