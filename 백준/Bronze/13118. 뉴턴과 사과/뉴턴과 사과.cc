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
    int a, b, c, d;
	std::cin >> a >> b >> c >> d;

    int x, y, z;
	std::cin >> x >> y >> z;

    if (x == a) {
        std::cout << 1;
    }
    else if (x == b) {
        std::cout << 2;
    }
    else if (x == c) {
        std::cout << 3;
    }
    else if (x == d) {
        std::cout << 4;
	}
    else {
		std::cout << 0;
    }
}