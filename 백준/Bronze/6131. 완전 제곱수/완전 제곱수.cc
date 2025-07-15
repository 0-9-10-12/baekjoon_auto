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

	int ans{};
	for (int i{ 1 }; i < 501; ++i) {
		for (int j{ i }; j < 501; ++j) {
			if (j * j == i * i + n) {
				++ans;
			}
		}
	}

	std::cout << ans;
}