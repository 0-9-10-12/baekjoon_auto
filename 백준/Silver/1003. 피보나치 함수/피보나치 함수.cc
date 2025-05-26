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
	int dp[41]{0, 1, 1};
    for (int i{3}; i < 41; ++i) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

    std::cin >> n;
	for (int i{}; i < n; ++i) {
		int x;
		std::cin >> x;

		if (x == 0) {
			std::cout << "1 0\n";
		}
		else if (x == 1) {
			std::cout << "0 1\n";
		}
		else {
			std::cout << dp[x - 1] << ' ' << dp[x] << '\n';
		}
	}
}