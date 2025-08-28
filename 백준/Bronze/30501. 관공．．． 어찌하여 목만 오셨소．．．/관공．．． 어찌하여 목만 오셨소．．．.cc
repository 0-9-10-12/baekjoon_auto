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

	std::string ans;
	for (int i{}; i < n; ++i) {
		std::string s;
		std::cin >> s;

		for (int j{}; j < s.size(); ++j) {
			if (s[j] == 'S') {
				ans = s;
				continue;
			}
		}
	}

	std::cout << ans;
}