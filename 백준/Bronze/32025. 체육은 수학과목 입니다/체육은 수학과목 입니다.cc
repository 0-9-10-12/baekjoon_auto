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
    int a, b;
    std::cin >> a >> b;

    if (a > b) {
        std::cout << b * 100 / 2;
        return;
    }

    std::cout << a * 100 / 2;
}
