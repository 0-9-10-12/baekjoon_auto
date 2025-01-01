// 9093 Parenthesis String
/*
"(", ")" count,
if "(" < ")" -> false return
"(" == ")" -> true return	/	!= false
*/
#include <iostream>
#include <string>

int main()
{
	int cnt;
	std::cin >> cnt;

	std::cin.ignore();

	for (; cnt--;) {
		std::string s;
		std::getline(std::cin, s);

		int b{};
		int e{};
		bool ans{};

		for (auto a = s.begin(); a != s.end(); ++a) {
			if (e > b) {
				ans = false;
				break;
			}
			if (*a == '(')
				b++;
			if (*a == ')')
				e++;
		}

		if (b == e)
			ans = true;
		if (b != e)
			ans = false;

		if (ans)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}