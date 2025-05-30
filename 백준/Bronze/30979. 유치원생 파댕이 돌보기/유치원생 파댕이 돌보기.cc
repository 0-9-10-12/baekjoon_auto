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
    int T, N;
	std::cin >> T >> N;

	int sum{};
    for (int i{}; i < N; ++i) {
        int F;
		std::cin >> F;

		sum += F;
    }

	if (sum >= T) {
		std::cout << "Padaeng_i Happy";
	}
	else {
		std::cout << "Padaeng_i Cry";
	}
}