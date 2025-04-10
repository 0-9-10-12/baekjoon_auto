#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <tuple>

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

    std::vector<std::pair<int, int>> v;
    for (int i{}; i < n; ++i) {
        int a, b;
        std::cin >> a >> b;

        v.push_back(std::make_pair(a, b));
    }

    std::sort(v.begin(), v.end(), [](std::pair<int, int> a, std::pair<int, int> b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }

        return a.second < b.second;
    });

    for (auto a : v) {
        std::cout << a.first << " " << a.second << "\n";
    }
}
