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
    int a, b, c;
	std::cin >> a >> b >> c;

	int n{ a * 24 * 60 + b * 60 + c - 11 * 24 * 60 - 11 * 60 - 11 };
	if (n < 0) {
		std::cout << -1;
		return;
	}

	std::cout << a * 24 * 60 + b * 60 + c - 11 * 24 * 60 - 11 * 60 - 11;
}