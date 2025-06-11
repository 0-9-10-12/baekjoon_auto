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
    
    std::vector<int> v;
	for (int i{}; i < n; ++i) {
		int x;
		std::cin >> x;
		v.push_back(x);
	}

	std::sort(v.begin(), v.end(), [](int a, int b) {
		return a > b;
	});

	for (int a : v) {
		std::cout << a << "\n";
	}
}