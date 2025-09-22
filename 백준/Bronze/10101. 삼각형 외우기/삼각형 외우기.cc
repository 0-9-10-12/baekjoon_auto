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

	if (a + b + c != 180)
	{
		std::cout << "Error";
		return;
	}

	if (a == 60 && b == 60 && c == 60)
	{
		std::cout << "Equilateral";
		return;
	}

	if (a == b || b == c || a == c)
	{
		std::cout << "Isosceles";
		return;
	}

	std::cout << "Scalene";
}