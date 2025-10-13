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
    int l, a, b, c, d;
	std::cin >> l >> a >> b >> c >> d;

	int x{ a % c == 0 ? a / c : a / c + 1 };
	int y{ b % d == 0 ? b / d : b / d + 1 };

	std::cout << l - std::max(x, y);
}