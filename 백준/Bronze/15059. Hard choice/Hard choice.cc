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
	int a, b, c;
	int x, y, z;
	std::cin >> a >> b >> c >> x >> y >> z;

	int u{ x - a > 0 ? x - a : 0 };
	int v{ y - b > 0 ? y - b : 0 };
	int w{ z - c > 0 ? z - c : 0 };

	std::cout << u + v + w;
}