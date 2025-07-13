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
	while (true) {
		std::string st;
		std::cin >> st;

		if (st == "TTYL") {
			std::cout << "talk to you later\n";
			break;
		}
		else if (st == "CU") {
			std::cout << "see you\n";
		}
		else if (st == ":-)") {
			std::cout << "I’m happy\n";
		}
		else if (st == ":-(") {
			std::cout << "I’m unhappy\n";
		}
		else if (st == ";-)") {
			std::cout << "wink\n";
		}
		else if (st == ":-P") {
			std::cout << "stick out my tongue\n";
		}
		else if (st == "(~.~)") { 
			std::cout << "sleepy\n"; 
		}
		else if (st == "TA") { 
			std::cout << "totally awesome\n"; 
		}
		else if (st == "CCC") { 
			std::cout << "Canadian Computing Competition\n"; 
		}
		else if (st == "CUZ") { 
			std::cout << "because\n"; 
		}
		else if (st == "TY") { 
			std::cout << "thank-you\n"; 
		}
		else if (st == "YW") { 
			std::cout << "you’re welcome\n"; 
		}
		else { 
			std::cout << st << "\n";
		}
	}
}