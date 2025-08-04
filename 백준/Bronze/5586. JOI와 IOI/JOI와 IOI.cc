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

    int jcnt{};
    int icnt{};

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            jcnt++;
        }
        if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            icnt++;
        }
    }

	std::cout << jcnt << "\n" << icnt << "\n";
}