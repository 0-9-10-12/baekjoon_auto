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

    int b{};
    int c{};
    for (int i{}; i < s.size(); ++i) {
        if (s[i] == 'B') {
            ++b;
        }
        else if (s[i] == 'C') {
            ++c;
		}
    }

    std::cout << b / 2 + c / 2;
}