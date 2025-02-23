#include <iostream>
#include <string>
#include <math.h>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	long N{};
	std::cin >> N;

	std::string s{};
	for (int i{N}; 0 < i; i /= 2) {
		if (i % 2 == 1) {
			s += "1";
		}
		else {
			s += "0";
		}
	}

	//std::cout << s << "\n";

	long ans{};
	for (int i{}; i < s.size(); ++i) {
		//std::cout << ans << " ";
		ans = ans + (s[s.size() - 1 - i] - '0') * pow(2, i);
	}

	std::cout << ans;
}