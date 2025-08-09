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

    int ans{}, cnt{}, gap{ 2'147'483'647 };
    for (int i{}; i < n; ++i) {
        int a, b, c;
		std::cin >> a >> b >> c;

        if (a + b + c < 512) {
            
        }
        else {
            ++cnt;
            if (a + b + c - 512 < gap) {
                gap = a + b + c - 512;
                ans = a + b + c;
            }
        }
    }

    if (cnt == 0) {
        std::cout << -1;
    }
    else {
        std::cout << ans;
    }
}