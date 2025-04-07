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
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;
    
    int ans{};
    if (s3 != "Fizz" && s3 != "Buzz" && s3 != "FizzBuzz") {
        ans = std::stoi(s3) + 1;
        goto ONE;
    }

    if (s2 != "Fizz" && s2 != "Buzz" && s2 != "FizzBuzz") {
        ans = std::stoi(s2) + 2;
        goto ONE;
    }

    if (s1 != "Fizz" && s1 != "Buzz" && s1 != "FizzBuzz") {
        ans = std::stoi(s1) + 3;
        goto ONE;
    }

ONE:
    if (ans % 3 == 0 && ans % 5 == 0) {
        std::cout << "FizzBuzz";
    }
    else if (ans % 3 == 0) {
        std::cout << "Fizz";
    }
    else if (ans % 5 == 0) {
        std::cout << "Buzz";
    }
    else {
        std::cout << ans;
    }
}
