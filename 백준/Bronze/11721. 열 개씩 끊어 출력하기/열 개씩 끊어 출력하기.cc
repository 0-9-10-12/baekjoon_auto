#include <iostream>
#include <string>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    std::string s;
    std::cin >> s;

    for (int i{}; i < s.size(); ++i) {
        std::cout << s[i];
        if (9 == i % 10)
            std::cout << "\n";
    }
}