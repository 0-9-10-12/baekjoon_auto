#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>

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
    int n;
    std::cin >> n;
      
    for (int i{}; i < n; ++i) {
        std::string s;
        std::cin >> s;
        std::cout << *s.begin() << *(s.end() - 1) << "\n";
    }
}
