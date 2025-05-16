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
    int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	
	for (int i{}; i < n; ++i) {
		std::cin >> v[i];
	}

	int ans{};
	for (std::vector<int>::reverse_iterator i{v.rbegin()}; i != v.rend(); ++i) {
		while (k >= *i) {
			k -= *i;
			++ans;
		}
		if (k == 0) {
			break;
		}
	}

	std::cout << ans;
}