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
    int N, A, B, a{ 1 }, b{ 1 };
	std::cin >> N >> A >> B;
    
    while (N--)
    {
        a += A;
        b += B;

        if (a < b)
        {
            std::swap(a, b);
        }
        else if (a == b)
        {
            --b;
        }
    }

    std::cout << a << " " << b;
}