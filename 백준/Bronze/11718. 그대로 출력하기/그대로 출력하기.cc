#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s;
    while (std::getline(std::cin, s)) {
        std::cout << s << "\n";
    }
}
