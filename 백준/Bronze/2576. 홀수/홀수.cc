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
    std::vector<int> v;
    
    for (int i{}; i < 7; ++i) {
        int n;
		std::cin >> n;
		v.push_back(n);
    }

	std::sort(v.begin(), v.end());

    int sum{};
    int min{101};
    for (const int& a : v) {
        if (a % 2 == 1) {
			sum += a;
            if (a < min) {
                min = a;
            }
        }
    }

    if (sum == 0) {
		std::cout << -1;
		return;
	}

	std::cout << sum << "\n" << min << "\n";
}