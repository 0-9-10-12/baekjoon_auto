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
	std::string s;
	std::cin >> s;

	std::string k{ "KOREA" };
	int count{};

	for (int i{}; i < s.size(); ++i) {
		if (s[i] == k[count % 5]) {
			++count;
		}
	}

	std::cout << count;
}