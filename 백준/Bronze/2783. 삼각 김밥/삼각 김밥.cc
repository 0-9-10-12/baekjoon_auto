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
    double a, b;
	std::cin >> a >> b;

	double c{a / b * 1'000};

    int n;
	std::cin >> n;
    for (int i{}; i < n; ++i) {
        double x, y;
		std::cin >> x >> y;

        if (x / y * 1'000 < c) {
            c = x / y * 1'000;
        }
    }

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << c;
}