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

    int ans[45]{0, 1, 1};
    for (int i{3}; i < n + 1; ++i) {
		ans[i] = ans[i - 1] + ans[i - 2];
    }

	std::cout << ans[n];
}