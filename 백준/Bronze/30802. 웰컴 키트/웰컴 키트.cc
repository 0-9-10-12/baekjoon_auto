#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	int S, M, L, XL, XXL, XXXL;
	int T, P;

	std::cin >> N >> S >> M >> L >> XL >> XXL >> XXXL >> T >> P;

	int Ans{};
	if (S % T == 0) {
		Ans += S / T;
	}
	else {
		Ans += S / T + 1;
	}
	if (M % T == 0) {
		Ans += M / T;
	}
	else {
		Ans += M / T + 1;
	}
	if (L % T == 0) {
		Ans += L / T;
	}
	else {
		Ans += L / T + 1;
	}
	if (XL % T == 0) {
		Ans += XL / T;
	}
	else {
		Ans += XL / T + 1;
	}
	if (XXL % T == 0) {
		Ans += XXL / T;
	}
	else {
		Ans += XXL / T + 1;
	}
	if (XXXL % T == 0) {
		Ans += XXXL / T;
	}
	else {
		Ans += XXXL / T + 1;
	}

	std::cout << Ans << "\n";
	std::cout << N / P << " " << N % P;

}