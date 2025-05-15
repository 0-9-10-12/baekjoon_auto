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
    int k, n;
	std::cin >> k >> n;

	std::vector<int> v(k);
	long long max{};
	for (int i{}; i < k; ++i) {
		std::cin >> v[i];
		max = std::max(max, static_cast<long long>(v[i]));
	}

	long long left{1};
	long long right{max};
	long long mid{};
	long long ans{};

	// 더 긴 길이 가능한지 혹은 더 짧은 길이 가능한기 계속 확인	
	while (left <= right) {
		// mid 계산
		mid = (left + right) / 2;
		// 몫의 합 저장 변수
		long long sum{};
		// 주어진 값들을 mid로 나누고 몫을 모두 더한게 n보다 크거나 같은지 확인
		for (int i{}; i < k; ++i) {
			sum += v[i] / mid;
		}
		// 크거나 같으면 더 긴 길이 가능한지 확인
		if (sum >= n) {
			left = mid + 1;
			ans = std::max(ans, mid);
		}
		// 작으면 더 짧은 길이 가능한지 확인
		else {
			right = mid - 1;
		}
	}

	std::cout << ans;
}