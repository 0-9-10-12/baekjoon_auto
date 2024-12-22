#include <iostream>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int input{};
    std::cin >> input;
    for (int i{}; i < input; ++i) {
        std::cout << input - i << "\n";
    }
}