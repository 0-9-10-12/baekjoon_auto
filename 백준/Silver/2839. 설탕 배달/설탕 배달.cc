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

	int ans{};
	while (n >= 0) {
		if (n % 5 == 0) {
			ans += n / 5;
			std::cout << ans;
			return;
		}

		n -= 3;
		++ans;
	}

	std::cout << "-1";
}
