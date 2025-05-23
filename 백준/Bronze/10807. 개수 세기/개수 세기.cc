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

	std::vector<int> v;
    for (int i{}; i < n; ++i) {
		int a;
		std::cin >> a;
		v.push_back(a);
    }

    int m;
	std::cin >> m;
    int cnt{};
    for (int i{}; i < v.size(); ++i) {
		if (v[i] == m) {
			++cnt;
		}
    }

	std::cout << cnt;
}