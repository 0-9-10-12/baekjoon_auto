#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>

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
    std::set<char> sc;
    std::string s;
    while (1) {
        std::getline(std::cin, s);
       // std::cin >> s;
        if (*s.begin() == '*') {
            break;
        }
        
        for (std::string::iterator si{s.begin()}; si != s.end(); ++si) {
            if (*si != ' ') {
                sc.insert(*si);
            }
        }

        if (sc.size() >= 26) {
            std::cout << "Y\n";
        }
        else {
            std::cout << "N\n";
        }

        sc.clear();
    }


}
