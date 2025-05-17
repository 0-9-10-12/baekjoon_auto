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
    int n, k;
	std::cin >> n >> k;

	std::map<std::string, int> m1;
	for (int i{}; i < n; ++i)
	{
		std::string s;
		std::cin >> s;
		++m1[s];
	}
	for (int i{}; i < k; ++i)
	{
		std::string s;
		std::cin >> s;
		++m1[s];
	}

	std::vector<std::string> v1;
	int cnt{};
	for (auto it = m1.begin(); it != m1.end(); ++it)
	{
		if (it->second == 2)
		{
			++cnt;
			v1.push_back(it->first);
		}
	}

	std::cout << cnt << "\n";
	for (int i{}; i < cnt; ++i)
	{
		std::cout << v1[i] << "\n";
	}
}