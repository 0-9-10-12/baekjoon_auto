#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int input{};
    std::cin >> input;

    for (int i{}; i < input; ++i) {
        for (int j{input - 1}; j > i; --j) {
            std::cout << " ";
        }
        for (int k{}; k < 2 * i + 1; ++k) {
            if (input == i + 1) {
                std::cout << "*";
            }
            else {
                if (0 == k || 2 * i == k)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}
