#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <tuple>
#include <stack>
#include <cmath>
#include <queue>
#include <unordered_map>

#define FastIO                      \
    std::ios::sync_with_stdio(false);    \
    std::cin.tie(NULL);                  \
    std::cout.tie(NULL);

void Solution();

int main() {
	FastIO;
	Solution();
}

struct MyStruct
{
	std::string s;
	int date;
	int month;
	int year;
};

void Solution()
{
	int n;
	std::cin >> n;

	std::vector<MyStruct> v;
	for (int i{}; i < n; ++i) {
		std::string s;
		int d, m, y;
		std::cin >> s >> d >> m >> y;
		v.push_back({s, d, m, y});

	}
	
	std::sort(v.begin(), v.end(), [](const MyStruct &a, const MyStruct &b) {
		if (a.year != b.year) {
			return a.year > b.year;
		}

		if (a.month != b.month) {
			return a.month > b.month;
		}

		return a.date > b.date;
	});

	std::cout << v[0].s << "\n";
	std::cout << v[v.size() - 1].s << "\n";
}

