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
    char c;
    std::cin >> c;

    if (c == 'n' || c == 'N') {
        std::cout << "Naver D2";
        return;
    }

    std::cout << "Naver Whale";
}
