#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int x{}, y{}, w{}, h{};
	std::cin >> x >> y >> w >> h;

	int temp{};
	if (x > y) {
		temp = y;
	}
	else {
		temp = x;
	}

	if (temp > w - x) {
		temp = w - x;
	}
	if (temp > h - y) {
		temp = h - y;
	}

	std::cout << temp;
}