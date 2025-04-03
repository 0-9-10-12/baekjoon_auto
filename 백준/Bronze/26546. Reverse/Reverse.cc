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
        int a, b;
        std::cin >> a >> b;
            
        for (int j{}; j < s.size(); ++j) {
            if (j < a || j >= b) {
                std::cout << s[j];
            }
        }

        std::cout << "\n";
    }
}
