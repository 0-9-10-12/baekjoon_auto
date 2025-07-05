#include <iostream>

int main() {
    int T, S;
	std::cin >> T >> S;
    
	if (12 <= T && T <= 16 && S == 0) {
        std::cout << 320;
    }
	else {
        std::cout << 280;
    }
}