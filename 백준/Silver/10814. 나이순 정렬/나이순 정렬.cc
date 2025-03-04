#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct MyStruct
{
	int age;
	std::string name;
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	
	int N;
	std::cin >> N;

	std::vector<MyStruct> v;
	for (int i{}; i < N; ++i) {
		MyStruct m;
		std::cin >> m.age >> m.name;
		v.push_back(m);
	}

	std::stable_sort(v.begin(), v.end(), [](MyStruct a, MyStruct b) {
		/*if (a.age == b.age) {
			return a.name
		}*/
		return a.age < b.age;
	});

	for (auto a: v) {
		std::cout << a.age << " " << a.name << "\n";
	}
}