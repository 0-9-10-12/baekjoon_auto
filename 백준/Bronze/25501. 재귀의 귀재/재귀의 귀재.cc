#include <iostream>
#include <cstring>

int T, cnt;
char word[1001];

int recursion(const char *s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s) {
	return recursion(s, 0, strlen(s) - 1);
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::cin >> T;

	for (int i{}; i < T; ++i) {
		std::cin >> word;
		std::cout << isPalindrome(word);
		std::cout << " " << cnt << '\n';
		cnt = 0;
	}

	return 0;
}