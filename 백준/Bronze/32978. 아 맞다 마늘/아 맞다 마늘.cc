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
    int n;
    std::cin >> n;
    
	std::vector<std::pair<int, std::string>> v;
    for (int i{}; i < n; ++i) {
        std::string s;
        std::cin >> s;
        v.push_back({0, s});
    }
    for (int i{}; i < n - 1; ++i) {
        std::string s;
        std::cin >> s;
        auto it{ std::find_if(v.begin(), v.end(), [&](const std::pair<int, std::string>& p) {
            return p.second == s;
		}) };
        if (it != v.end()) {
            it->first = 1;
        }
    }

    for (const auto& a: v) {
        if (a.first == 0) {
            std::cout << a.second;
        }
	}
}