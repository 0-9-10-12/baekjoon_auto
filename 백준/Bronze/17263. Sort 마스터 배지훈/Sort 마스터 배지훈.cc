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
    int a;
	std::cin >> a;

    std::vector<int> v;
    for (int i{}; i < a; ++i) {
        int x;
        std::cin >> x;
        v.push_back(x);
	}

    std::sort(v.begin(), v.end());
    std::cout << v[v.size() - 1];
}