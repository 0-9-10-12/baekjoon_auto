#include <iostream>
#include <deque>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	std::deque<int> d;
	for (int i{1}; i < N + 1; ++i) {
		d.push_front(i);
	}

	for (; d.size() != 1;) {
		d.pop_back();
		int temp{d.back()};
		d.pop_back();
		d.push_front(temp);
	}

	std::cout << *d.begin();
}