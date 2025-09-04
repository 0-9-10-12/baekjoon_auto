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
	int a[8]{};
	for (int i{}; i < 8; ++i) {
		std::cin >> a[i];
	}

	int max{};
	if (a[0] + a[1] + a[2] + a[3] > max) {
		max = a[0] + a[1] + a[2] + a[3];
	}
	if (a[1] + a[2] + a[3] + a[4] > max) {
		max = a[1] + a[2] + a[3] + a[4];
	}
	if (a[2] + a[3] + a[4] + a[5] > max) {
		max = a[2] + a[3] + a[4] + a[5];
	}
	if (a[3] + a[4] + a[5] + a[6] > max) {
		max = a[3] + a[4] + a[5] + a[6];
	}
	if (a[4] + a[5] + a[6] + a[7] > max) {
		max = a[4] + a[5] + a[6] + a[7];
	}
	if (a[5] + a[6] + a[7] + a[0] > max) {
		max = a[5] + a[6] + a[7] + a[0];
	}
	if (a[6] + a[7] + a[0] + a[1] > max) {
		max = a[6] + a[7] + a[0] + a[1];
	}
	if (a[7] + a[0] + a[1] + a[2] > max) {
		max = a[7] + a[0] + a[1] + a[2];
	}

	std::cout << max;
}