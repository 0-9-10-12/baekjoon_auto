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
    
    std::cin.ignore();

    for (int i{}; i < n; ++i) {
		std::string s;
		getline(std::cin, s);


        int sum{};
        for (int j{}; j < s.size(); ++j) {
			if (s[j] == ' ') continue;

            sum += s[j] - 'A' + 1;
        }

        if (sum == 100) {
            std::cout << "PERFECT LIFE\n";

        }
        else {
            std::cout << sum << "\n";
        }
    }
}