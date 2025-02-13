#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n, m;
	std::cin >> n >> m;

	int month{m - n + 14};
	int ans{n - 7};
	
	if (ans <= 0) {
		ans += month;
	}

	std::cout << ans;
}