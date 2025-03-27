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
    int a, b, c;
    std::cin >> a >> b >> c;

    int h{a};
    int m{b + c};
    if (m >= 60) {
        h = a + ((b + c) / 60);
        m = (b + c) % 60;
    }
    if (h >= 24) {
        h = h % 24;
    }

    std::cout << h << " " << m;
}
