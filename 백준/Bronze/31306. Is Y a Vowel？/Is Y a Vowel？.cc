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

	int a{}, b{};
	for (int i{}; i < s.size(); ++i)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
			|| s[i] == 'o' || s[i] == 'u')
		{
			++a;
			++b;
		}
		if (s[i] == 'y') {
			++b;
		}
	}

	std::cout << a << " " << b;
}