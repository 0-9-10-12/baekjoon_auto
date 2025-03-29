#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>

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

    for (int i{}; i < n; ++i) {
        int a;
        std::cin >> a;
        for (int j{}; j < a; ++j) {
            std::cout << "=";
        }
        std::cout << "\n";
    }
}
