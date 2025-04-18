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
    int n, k;
    std::cin >> n >> k;

    std::vector<int> v;
    for (int i{1}; i < n + 1; ++i) {
        v.push_back(i);
    }

    std::cout << "<";

    int count{-1};
    while (1) {
        if (v.size() == 0) {
            break;
        }

        for (int i{}; i < k; ++i) {
            ++count;
            if (count >= v.size()) {
                count = 0;
            }
        }

        if (v.size() == 1) {
            std::cout << v[count];
        }
        else {
            std::cout << v[count] << ", ";
        }

        v.erase(v.begin() + count);
        --count;
    }

    std::cout << ">";
}
