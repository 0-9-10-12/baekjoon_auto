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
	std::cin.ignore();

    for (int i{}; i < n; ++i) {
        std::string s;
        std::getline(std::cin, s);

        for (int j{static_cast<int>(s.size() - 1)}; j >= 0; --j) {
            std::cout << s[j];
		}

		std::cout << "\n";
    }
}