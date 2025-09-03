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

	int cnt{};
	for (int i{}; i < n; ++i) {
		std::string s;
		std::cin >> s;

		for (int j{}; j < s.size(); ++j) {
			if ((s[j] == '0' && s[j + 1] == '1') || (s[j] == 'O' && s[j + 1] == 'I')) {
				++cnt;

				break;
			}
		}
	}

	std::cout << cnt;
}