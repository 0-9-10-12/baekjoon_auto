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
	std::map<int, int> mii;
	for (int i{}; i < n; ++i)
	{
		int a;
		std::cin >> a;
		mii[a]++;
	}

	int m;
	std::cin >> m;
	std::vector<int> v;
	for (int i{}; i < m; ++i)
	{
		int a;
		std::cin >> a;
		
		if (mii.find(a) != mii.end())
		{
			std::cout << mii[a] << " ";
		}
		else
		{
			std::cout << 0 << " ";
		}
	}
}