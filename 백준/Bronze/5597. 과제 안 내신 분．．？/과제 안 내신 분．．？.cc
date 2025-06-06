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
    int arr[30]{};

    for (int i{}; i < 28; ++i) {
        int n;
		std::cin >> n;
		arr[n - 1] = 1;
	}

	for (int i{}; i < 30; ++i) {
		if (arr[i] == 0) {
			std::cout << i + 1 << '\n';
		}
	}
}