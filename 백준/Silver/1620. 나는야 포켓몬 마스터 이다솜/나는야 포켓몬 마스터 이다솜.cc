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
	int n, m;
	std::cin >> n >> m;

	std::vector<std::pair<std::string, int>> v;
	std::unordered_map<std::string, int> name_map;

	int cnt{1};
	for (int i{}; i < n; ++i)
	{
		std::string s;
		std::cin >> s;
		v.push_back({s, cnt});
		name_map[s] = cnt++;
	}

	for (int i{}; i < m; ++i)
	{
		std::string s;
		std::cin >> s;

		if (isdigit(s[0]))
		{
			int idx{std::stoi(s)};
			std::cout << v[idx - 1].first << "\n";
		}
		else
		{
			std::cout << name_map[s] << "\n";
		}
	}
}
