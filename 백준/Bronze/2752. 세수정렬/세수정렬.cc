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
    
    for (int i{}; i < 3; ++i) {
        int n;
        std::cin >> n;
		v.push_back(n);
    }

	std::sort(v.begin(), v.end());

    for (const auto& e : v) {
        std::cout << e << ' ';
	}
}