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
    int n, w, h;
	std::cin >> n >> w >> h;

    for (int i{}; i < n; ++i) {
        int a;
        std::cin >> a;
        if (a * a <= w * w + h * h) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
		}
    }
}