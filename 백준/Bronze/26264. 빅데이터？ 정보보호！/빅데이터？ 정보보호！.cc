#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{};
	std::string s{};

	std::cin >> N >> s;

	int count{};
	for (std::string::iterator it{s.begin()}; it != s.end() ; ++it) {
		if (*it == 's') {
			++count;
		}
	}

	if (count * 2 > N) {
		std::cout << "security!";
	}
	else if (count * 2 == N) {
		std::cout << "bigdata? security!";
	}
	else {
		std::cout << "bigdata?";
	}

}
