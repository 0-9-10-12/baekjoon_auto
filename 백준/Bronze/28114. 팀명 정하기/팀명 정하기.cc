#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct MyStruct
{
	int count;
	std::string name{};
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int P{}, Y{};
	std::string S{};

	std::vector<int> v;
	std::vector<MyStruct> MyVec;

	for (int i{}; i < 3; ++i) {
		std::cin >> P >> Y >> S;

		v.push_back(Y % 100);
		MyVec.push_back({P, S});
	}

	std::sort(v.begin(), v.end());
	std::sort(MyVec.begin(), MyVec.end(), [](MyStruct a, MyStruct b) {
		return a.count > b.count;
	});

	for (int i : v) {
		std::cout << i;
	}
	
	std::cout << "\n";

	for (MyStruct i : MyVec) {
		std::cout << i.name[0];
	}
}