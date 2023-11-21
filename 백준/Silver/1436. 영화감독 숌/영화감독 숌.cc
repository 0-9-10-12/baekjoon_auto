#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int n{};
	std::cin >> n;

	int count{};
	int temp{};
	for (int i{ 666 }; ; ++i) {
		temp = i;
		while (0 != temp / 100) {
			if (666 == temp % 1000) {
				count++;
				if (count == n) {
					break;
				}
				goto a;
			}
			
			temp /= 10;
		}
		a :
		if (count == n) {
			std::cout << i;
			break;
		}
	}
}