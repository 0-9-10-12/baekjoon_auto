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

	std::string s;
	std::cin >> s;
	char a{ s[0] };
	for (int i{}; i < s.size(); ++i) {
		if (a != s[i]) {
			std::cout << "No";
			return;
		}
	}

	std::cout << "Yes";
}