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
	int a, b;
	std::cin >> a >> b;

	if (a < 2 || b < 1) {
		std::cout << 0;
		return;
	}

	if (a < b * 2) {
		std::cout << a / 2;
	}
	else {
		std::cout << b;
	}
}