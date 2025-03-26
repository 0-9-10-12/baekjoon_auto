#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>

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

    std::cout << b - a << " " << b;
}
