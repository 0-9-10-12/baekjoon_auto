#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int input{};
    std::cin >> input;

    for (int i{}; i < input; ++i) {
        for (int j{}; j < i; ++j) {
            std::cout << " ";
        }
        for (int k{}; k < (input - i) * 2 - 1; ++k) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    for (int i{}; i < input - 1; ++i) {
        for (int j{input}; j > i + 2; --j) {
            std::cout << " ";
        }
        for (int k{}; k < (i + 2) * 2 - 1; ++k) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
