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
    std::string s;
    std::cin >> s;

    for (int i{1}; i < s.size(); ++i) {
        int a{1};

        if (s.size() == 1) {
            std::cout << "NO";
            return;
        }

        for (int j{}; j < i; ++j) {
            a *= s[j] - '0';
        }

        int b{1};

        for (int j{i}; j < s.size(); ++j) {
            b *= s[j] - '0';
        }

        //std::cout << a << ", " << b << "\n";
        if (a == b) {
            std::cout << "YES";
            return;
        }
    }

    std::cout << "NO";
}
