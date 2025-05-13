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
    int n;
	std::cin >> n;

	if (n == 0) {
		std::cout << 0;
		return;
	}

    std::deque<int> d;
    int sum{};
    for (int i{}; i < n; ++i) {
        int m;
		std::cin >> m;
		d.push_back(m);
		sum += m;
    }

	std::sort(d.begin(), d.end());

    int p{static_cast<int>(std::round((d.size() * 0.15)))};

	for (int i{}; i < p; ++i) {
		sum -= d.front();
		d.pop_front();
		sum -= d.back();
		d.pop_back();
	}

	int avg{static_cast<int>(std::round(sum / static_cast<float>(d.size())))};
	std::cout << avg;
}