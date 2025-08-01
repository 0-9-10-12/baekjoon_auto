#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    int N;

	cin >> N;
    
    N--;
    
	cout << (char)('a' + (N % 8)) << N / 8 + 1;
}