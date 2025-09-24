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
	int n, a, b, x, y;
	std::cin >> n >> a >> b >> x >> y;

	int ans1{}, ans2{};

	if (n % a == 0) {
		ans1 = n / a * b;
	}
	else {
		ans1 = (n / a + 1) * b;
	}

	if (n % x == 0) {
		ans2 = n / x * y;
	}
	else {
		ans2 = (n / x + 1) * y;
	}

	std::cout << std::min(ans1, ans2);
}