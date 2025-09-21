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
    std::vector<int> vi;
    
    for (int i{}; i < 3; ++i) {
        int n;
        std::cin >> n;
		vi.push_back(n);
    }

	std::sort(vi.begin(), vi.end());

    std::unordered_map<char, int> um;

	um['A'] = vi[0];
	um['B'] = vi[1];
	um['C'] = vi[2];

    std::string s;
	std::cin >> s;

	std::cout << um[s[0]] << ' ' << um[s[1]] << ' ' << um[s[2]];
}