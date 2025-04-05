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
    std::string a, b;
    std::cin >> a >> b;

    for (int i{}; i < a.size(); ++i) {
        if (a[i] == '6') {
            a[i] = '5';
        }
    }

    for (int i{}; i < b.size(); ++i) {
        if (b[i] == '6') {
            b[i] = '5';
        }
    }

    std::cout << std::stoi(a) + std::stoi(b) << " ";

    for (int i{}; i < a.size(); ++i) {
        if (a[i] == '5') {
            a[i] = '6';
        }
    }

    for (int i{}; i < b.size(); ++i) {
        if (b[i] == '5') {
            b[i] = '6';
        }
    }

    std::cout << std::stoi(a) + std::stoi(b);
}
