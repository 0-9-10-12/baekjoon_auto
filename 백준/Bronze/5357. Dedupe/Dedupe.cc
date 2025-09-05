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

	for (int i{}; i < n; ++i) {
		std::string s;
		std::cin >> s;

		std::string ans{s[0]};
		for (int j{1}; j < s.size(); ++j) {
			if (s[j] != s[j - 1]) {
				ans += s[j];
			}
		}

		std::cout << ans << '\n';
	}
}