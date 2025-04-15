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
    int n;
    std::cin >> n;

    std::stack<int> s;
    for (int i{}; i < n; ++i) {
        int k;
        std::cin >> k;

        if (k == 0) {
            s.pop();
            continue;
        }

        s.push(k);
    }

    int ans{};
    while(s.size()) {
        ans += s.top();
        s.pop();
    }

    std::cout << ans;
}
