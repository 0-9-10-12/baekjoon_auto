#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int max1 = 0, max2 = 0;
	for (int i = 0; i < n; i++) {
		int halmet;
		cin >> halmet;

		if (halmet > max1) { max1 = halmet; }
	}
	for (int i = 0; i < m; i++) {
		int vest;
		cin >> vest;

		if (vest > max2) { max2 = vest; }
	}

	cout << max1 + max2 << endl;
}