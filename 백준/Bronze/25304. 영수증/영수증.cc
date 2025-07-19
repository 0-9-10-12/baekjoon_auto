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
	int x, n;
	std::cin >> x >> n;

	int value{};
	for (int i{}; i < n; ++i) {
		int a, b;
		std::cin >> a >> b;

		value += a * b;
	}

	if (value == x) {
		std::cout << "Yes";
	} 
	else {
		std::cout << "No";
	}
}