#include <iostream>

long long int dp[91];

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;
	dp[1] = 1;
	dp[2] = 1;
	for (int i{ 3 }; i <= n; ++i) {
		dp[i] = 1;
		for (int j{ 2 }; i - j >= 1; ++j) {
			dp[i] += dp[i - j];
		}
	}

	std::cout << dp[n];
}