#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <tuple>
#include <stack>

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
	while (1) {
		std::string s;
		std::getline(std::cin, s);

		//std::cout << s << "\n";

		if (s == ".") {
			return;
		}

		std::stack<char> st;
		bool flag{true};
		for (int i{}, size = s.size(); i < size; ++i) {
			if (s[i] == '(') {
				st.push(s[i]);
			}
			if (s[i] == ')') {
				if (st.size() == 0) {
					std::cout << "no\n";
					flag = false;
					break;
				}
				if (st.top() == '(') {
					st.pop();
				}
				else {
					std::cout << "no\n";
					flag = false;
					break;
				}
			}
			if (s[i] == '[') {
				st.push(s[i]);
			}
			if (s[i] == ']') {
				if (st.size() == 0) {
					std::cout << "no\n";
					flag = false;
					break;
				}
				if (st.top() == '[') {
					st.pop();
				}
				else {
					std::cout << "no\n";
					flag = false;
					break;
				}
			}
		}

		if (flag) {
			if (st.size() == 0) {
				std::cout << "yes\n";
				continue;
			}

			std::cout << "no\n";
		}
	}
}
