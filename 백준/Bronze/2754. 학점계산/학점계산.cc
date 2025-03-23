#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::string s;
	std::cin >> s;
	float ans{};
	std::cout << std::fixed;
	std::cout.precision(1);

	switch (s[0])
	{
	case 'A':
		ans += 4.0;
		break;
	case 'B':
		ans += 3.0;
		break;
	case 'C':
		ans += 2.0;
		break;
	case 'D':
		ans += 1.0;
		break;
	}

	switch (s[1])
	{
	case '+':
		ans += 0.3;
		break;
	case '-':
		ans -= 0.3;
		break;
	}

	std::cout << ans;
}