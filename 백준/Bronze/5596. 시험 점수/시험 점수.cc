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
    int s{}, t{};

    for (int i{}; i < 4; ++i) {
        int a;
        std::cin >> a;
		
        s += a;
    }

    for (int i{}; i < 4; ++i) {
        int b;
        std::cin >> b;
        t += b;
	}

    if (t > s) {
        std::cout << t;
    }
    else {
		std::cout << s;
    }
}