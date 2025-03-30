#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>

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

    std::map<char, int> m;
    for (int i{}; i < n; ++i) {
        std::string s;
        std::cin >> s;

        m[*s.begin()]++;
    }

    bool count{false};
	for (auto a : m) {
		if (a.second >= 5) {
			std::cout << a.first;
            count = true;
		}
	}

    if (!count) {
        std::cout << "PREDAJA";
    }
}
