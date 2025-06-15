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
	std::cin >> a >> b >> c;

	std::cout << (a + b) % c << "\n";
	std::cout << ((a % c) + (b % c)) % c << "\n";
	std::cout << (a * b) % c << "\n";
	std::cout << ((a % c) * (b % c)) % c << "\n";
}