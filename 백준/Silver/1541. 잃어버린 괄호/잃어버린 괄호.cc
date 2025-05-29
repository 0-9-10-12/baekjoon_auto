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

	std::string a{};
	std::queue<int> num;
	std::queue<int> q;
	for (int i{}; i < s.size(); ++i) {
		if (i == s.size() - 1) {
			a += s[i];
			num.push(std::stoi(a));
		}

		if (s[i] != '-' && s[i] != '+') {
			a += s[i];
		}
		else {
			num.push(std::stoi(a));
			
			if (s[i] == '-') {
				q.push(0);
			}
			else {
				q.push(1);
			}

			a = "";
		}
	}

	int ans{num.front()};
	num.pop();
	bool flag{true};
	while (!num.empty()) {
		if (q.front() == 0) {
			ans -= num.front();
			flag = false;
			num.pop();
			continue;
		}
		if (true){
			ans += num.front();
			q.pop();
		}
		num.pop();
	}

	std::cout << ans;
}