#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct MyStruct
{
	std::string s;
	int korean;
	int english;
	int math;
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N{};
	std::vector<MyStruct> v{};

	std::cin >> N;
	for (int i{}; i < N; ++i) {
		std::string s;
		int korean, english, math;
		std::cin >> s >> korean >> english >> math;

		v.push_back({s, korean, english, math});
	}

	std::sort(v.begin(), v.end(), [](MyStruct a, MyStruct b) {
		if (a.korean != b.korean) {
			return a.korean > b.korean;
		}
		
		if (a.english!= b.english) {
			return a.english < b.english;
		}
		
		if (a.math != b.math) {
			return a.math > b.math;
		}
		
		return a.s < b.s;
	});
	
	for (auto a : v) {
		std::cout << a.s << "\n";
	}
}