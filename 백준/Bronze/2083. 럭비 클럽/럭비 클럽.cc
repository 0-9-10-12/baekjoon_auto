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

void Solution()
{
	while (true) {
		std::string s;
		int a, b;
		
		std::cin >> s >> a >> b;
		
		if (s == "#" && a == 0 && b == 0) {
			break;
		}

		if (a > 17 || b > 79) {
			std::cout << s << " Senior\n";
		}
		else {
			std::cout << s << " Junior\n";
		}
	}
}

