#include <iostream>
#include <bitset>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	
	unsigned long long num{1};

	std::string s{};
	for (int i{}; i < 2; ++i) {
		std::cin >> s;
		std::bitset<32> bitNum(s);	// 문자열로 초기화
		//std::cout << bitNum << "\n";
		num *= bitNum.to_ullong();	// 2진수를 10진수 ullong으로 변환
		//std::cout << num << " ";
	}

	std::bitset<64> bitNum2(num);	// num을 2진수로
	std::string s2{bitNum2.to_string()};

	std::cout << s2.substr(s2.find("1"));
}