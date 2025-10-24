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
    int a, b, c, d;
   std::cin >> a >> b >> c >> d;

    std::cout << a + 2 + c + 2 + b + d + b + d + std::abs(a - c);
}