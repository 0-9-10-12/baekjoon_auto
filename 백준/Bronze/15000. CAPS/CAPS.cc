#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    
    for (int i{}; i < s.size(); ++i) {
        s[i] = std::toupper(s[i]);
    }
    
    std::cout << s;
}