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
#include <deque>

#define FastIO                      \
    std::ios::sync_with_stdio(false);    \
    std::cin.tie(NULL);                  \
    std::cout.tie(NULL);

void Solution();

int main() {
	FastIO;
	Solution();
}

void Solution()
{
	std::string s;
	std::cin >> s;

	int a;
	std::cin >> a;
	int count{};
	for (int i{}; i < a; ++i) {
		std::string t;
		std::cin >> t;

		if (std::stoi(t.substr(0, 4)) > std::stoi(s.substr(0, 4))) {
			++count;
			continue;
		}
		else if (std::stoi(t.substr(0, 4)) == std::stoi(s.substr(0, 4))) {
			if (std::stoi(t.substr(5, 2)) > std::stoi(s.substr(5, 2))) {
				++count;
				continue;
			}
			else if (std::stoi(t.substr(5, 2)) == std::stoi(s.substr(5, 2))) {
				if (std::stoi(t.substr(8, 2)) >= std::stoi(s.substr(8, 2))) {
					++count;
					continue;
				}
			}
		}
	}

	std::cout << count;
}