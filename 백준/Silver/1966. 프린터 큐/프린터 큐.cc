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

	for (int i{}; i < n; ++i) {
		int a, b;
		std::cin >> a >> b;
		std::queue<std::pair<int, int>> q;
		for (int j{}; j < a; ++j) {
			int c;
			std::cin >> c;
			q.push({c, j});
		}

		int count{0};
		while(!q.empty()) {
			int max{};
			std::queue<std::pair<int, int>> tmp{q};
			while (!tmp.empty()) {
				if (tmp.front().first > max)
					max = tmp.front().first;
				tmp.pop();
			}

			if (q.front().first == max) {
				++count;
				if (q.front().second == b) {
					std::cout << count << "\n";
					break;
				}

				q.pop();
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}
	}
}
