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
    std::string s;
    int n;
	std::cin >> s >> n;

    int cnt{};
    for (int i{}; i < n; ++i)
    {
        std::string t;
		std::cin >> t;

        if (s == t) {
			++cnt;
        }
	}

	std::cout << cnt;
}