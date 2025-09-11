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

	if (a == b && b == c) {
		std::cout << 10'000 + a * 1'000;
	}
	else if (a == b || a == c) {
		std::cout << 1'000 + a * 100;
	}
	else if (b == c) {
		std::cout << 1'000 + b * 100;
	}
	else {
		std::cout << std::max({ a, b, c }) * 100;
	}
}