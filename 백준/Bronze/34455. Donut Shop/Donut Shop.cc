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
    int d, e;
	std::cin >> d >> e;

    for (int i{}; i < e; ++i) {
        char c;
        int q;
		std::cin >> c >> q;

        if (c == '+') {
            d += q;
        }
        if (c == '-') {
            d -= q;
		}
    }

	std::cout << d;
}