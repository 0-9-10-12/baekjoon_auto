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
    int n, k;
	std::cin >> n >> k;

	std::map<std::string, std::string> m;
	for (int i{}; i < n; ++i) {
		std::string a, b;
		std::cin >> a >> b;
		m[a] = b;
	}
	
	for (int i{}; i < k; ++i) {
		std::string a;
		std::cin >> a;
		
		std::cout << m[a] << "\n";
	}
}