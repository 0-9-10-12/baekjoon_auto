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
	std::string board[10][2] = { {"11", "A B C D E F G H J L M"},
						   {"9", "A C E F G H I L M"},
						   {"9", "A C E F G H I L M"},
						   {"9", "A B C E F G H L M"},
						   {"8", "A C E F G H L M"},
						   {"8", "A C E F G H L M"},
						   {"8", "A C E F G H L M"},
						   {"8", "A C E F G H L M"},
						   {"8", "A C E F G H L M"},
						   {"8", "A B C F G H L M"} };
	
	int n;
	std::cin >> n;

	std::cout << board[n - 1][0] << "\n" << board[n - 1][1];
}