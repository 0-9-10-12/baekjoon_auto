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
	std::string s;
	std::cin >> s;

	if (s == "SONGDO")
	{
		std::cout << "HIGHSCHOOL";
	}
	else if (s == "CODE")
	{
		std::cout << "MASTER";
	}
	else if (s == "2023")
	{
		std::cout << "0611";
	}
	else if (s == "ALGORITHM")
	{
		std::cout << "CONTEST";
	}
}