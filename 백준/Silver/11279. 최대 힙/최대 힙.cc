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

	std::priority_queue<int> pq;
    for (int i{}; i < n; ++i) {
        unsigned int a;
		std::cin >> a;
        if (a == 0) {
            if (pq.empty()) {
				std::cout << "0\n";
            }
            else {
				std::cout << pq.top() << "\n";
				pq.pop();
			}
        }
        else {
            pq.push(a);
        }
    }
}