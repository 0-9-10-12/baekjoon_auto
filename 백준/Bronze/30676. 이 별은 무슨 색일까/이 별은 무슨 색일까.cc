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
    int N;
    std::cin >> N;

    if (N <= 780 && N >= 620) {
        std::cout << "Red";
    }
    else if (N < 620 && N >= 590) {
        std::cout << "Orange";
    }
    else if (N < 590 && N >= 570) {
        std::cout << "Yellow";
    }
    else if (N < 570 && N >= 495) {
        std::cout << "Green";
    }
    else if (N < 495 && N >= 450) {
        std::cout << "Blue";
    }
    else if (N < 450 && N >= 425) {
        std::cout << "Indigo";
    }
    else if (N < 425 && N >= 380) {
        std::cout << "Violet";
    }
}