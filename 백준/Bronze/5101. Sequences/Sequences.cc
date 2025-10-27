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
        int a, d, n;
        std::cin >> a >> d >> n;
        if (a == 0 && d == 0 && n == 0) {
            break;
        }

        if (d != 0 && (n - a) % d == 0) {
            int k = 1 + (n - a) / d;
            if (k >= 1) {
                std::cout << k << "\n";
            }
            else {
                std::cout << "X\n";
            }
        }
        else {
            std::cout << "X\n";
        }
    }
}