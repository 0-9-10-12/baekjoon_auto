#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <tuple>

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

    std::pair<int, int> arr[51];
    for (int i{}; i < n; ++i) {
        std::cin >> arr[i].first >> arr[i].second;
    }

    int rank{1};
    for (int i{}; i < n; ++i) {
        for (int j{}; j < n; ++j) {
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) {
                ++rank;
            }
        }

        std::cout << rank << ' ';
        rank = 1;
    }
}
