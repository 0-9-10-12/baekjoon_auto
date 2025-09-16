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
    while (true) {
        int n;
        std::cin >> n;

        if (n == 0) {
            break;
        }

        for (int i{}; i < n; ++i) {
            for (int j{}; j < i + 1; ++j) {
                std::cout << "*";
            }

			std::cout << "\n";
        }
    }
}