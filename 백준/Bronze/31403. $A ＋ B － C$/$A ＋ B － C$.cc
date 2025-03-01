#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::string A, B, C;
	std::cin >> A >> B >> C;
	std::cout << stoi(A) + stoi(B) - stoi(C) << "\n";
	std::cout << stoi(A + B) - stoi(C);
}