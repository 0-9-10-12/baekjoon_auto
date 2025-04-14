#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <tuple>

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

    if (s == "NLCS") {
        std::cout << "North London Collegiate School";
    }
    if (s == "BHA") {
        std::cout << "Branksome Hall Asia";
    }
    if (s == "KIS") {
        std::cout << "Korea International School";
    }
    if (s == "SJA") {
        std::cout << "St. Johnsbury Academy";
    } 
    if (s == "North London Collegiate School") {
        std::cout << "NLCS";
    }
    if (s == "Branksome Hall Asia") {
        std::cout << "BHA";
    }
    if (s == "Korea International School") {
        std::cout << "KIS";
    }
    if (s == "St. Johnsbury Academy") {
        std::cout << "SJA";
    }
}
