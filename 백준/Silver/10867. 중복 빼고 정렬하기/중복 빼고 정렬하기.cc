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
	std::set<int> s;

    int n;
	std::cin >> n;
	for (int i{}; i < n; ++i) {
		int x;
		std::cin >> x;
		s.insert(x);
	}

	for (auto a : s) {
		std::cout << a << " ";
	}
}