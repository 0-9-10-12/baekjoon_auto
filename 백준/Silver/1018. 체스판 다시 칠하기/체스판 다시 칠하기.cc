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
	int n, m;
	int ans;
	int res{64};
	char original[50][50];

	std::cin >> n >> m;

	for (int i{}; i < n; ++i) {
		for (int j{}; j < m; ++j) {
			std::cin >> original[i][j];
		}
	}

	char WB[8][8] = {
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};

	char BW[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};

	for (int i{}; i <= n - 8; ++i) {
		for (int j{}; j <= m - 8; ++j) {
			int cnt_w{}, cnt_b{};

			for (int x{}; x < 8; ++x) {
				for (int y{}; y < 8; ++y) {
					if (original[i + x][j + y] != BW[x][y]) {
						++cnt_b;
					}

					if (original[i + x][j + y] != WB[x][y]) {
						++cnt_w;
					}
				}
			}

			ans = std::min(cnt_b, cnt_w);
			
			if (ans <= res) {
				res = ans;
			}
		}
	}

	std::cout << res;
}

