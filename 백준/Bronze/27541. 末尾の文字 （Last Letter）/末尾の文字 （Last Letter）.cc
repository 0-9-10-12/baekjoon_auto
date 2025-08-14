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
    std::string s;
	std::cin >> n >> s;

    if (s[s.size() - 1] == 'G') {
        for (int i{}; i < s.size() - 1; ++i) {
			std::cout << s[i];
        }
    }
    else {
		std::cout << s << 'G';
    }
}