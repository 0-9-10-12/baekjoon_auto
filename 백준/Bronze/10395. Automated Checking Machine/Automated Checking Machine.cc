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
    int one[5]{};
    for (int i{}; i < 5; ++i) {
        int a;
        std::cin >> a;

		one[i] = a;
    }

    bool ans{};
    for (int i{}; i < 5; ++i) {
        int a;
        std::cin >> a;

        if (a != one[i]) {
            ans = true;
        } 
        else {
            ans = false;
            break;
		}
    }

    if (ans) {
        std::cout << "Y";
    } 
    else {
        std::cout << "N";
	}
}