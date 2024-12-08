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
        for (int k{}; k < i + 1; ++k) {
         std::cout << "* ";   
        }
        std::cout << "\n";
    }
}
