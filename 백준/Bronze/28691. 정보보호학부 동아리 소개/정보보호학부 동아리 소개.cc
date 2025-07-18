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
    char a;
    std::cin >> a;

    if (a == 'M') {
        std::cout << "MatKor";
    }
    else if (a == 'W') {
        std::cout << "WiCys";
    }
    else if (a == 'C') {
        std::cout << "CyKor";
    }
    else if (a == 'A') {
        std::cout << "AlKor";
    }
    else if (a == '$') {
        std::cout << "$clear";
    }
}