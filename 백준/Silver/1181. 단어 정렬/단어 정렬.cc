#include <iostream>
#include <set>
#include <string>

struct set_compare
{
	bool operator() (const std::string& a, const std::string& b) const {
		if (a.size() == b.size())
			return a < b;	// 사전순
		else
			return a.size() < b.size();	// 길이순
	}
};

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int count{};
	std::cin >> count;

	std::set<std::string, set_compare> s{};

	std::string sInput;
	for (int i{}; i < count; ++i) {
		std::cin >> sInput;
		s.insert(sInput);
	}

	for (const std::string& a : s)
		std::cout << a << "\n";
}