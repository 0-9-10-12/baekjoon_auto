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
    int g, p, t;
	std::cin >> g >> p >> t;

    if (g * p < g + t * p) {
        std::cout << 1;
    }
    else if (g * p > g + t * p) {
        std::cout << 2;
    }
    else {
        std::cout << 0;
    }
}