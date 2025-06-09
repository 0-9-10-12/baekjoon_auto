#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <tuple>
#include <stack>
#include <cmath>
#include <queue>
#include <unordered_map>
#include <deque>

#define FastIO                      \
    std::ios::sync_with_stdio(false);    \
    std::cin.tie(NULL);                  \
    std::cout.tie(NULL);

void Solution();

int main() {
	FastIO;
	Solution();
}

void Solution()
{
	double avg{};
	double count{};
	std::string name;
	double n, m{};
	std::string score;
	for (int i{}; i < 20; ++i) {
		std::cin >> name >> n >> score;

		if (score == "P") {
			continue;
		}

		if (score == "A0") {
			m = 4;
		}
		else if (score == "B0") {
			m = 3;
		}
		else if (score == "C0") {
			m = 2;
		}
		else if (score == "D0") {
			m = 1;
		}
		else if (score == "A+") {
			m = 4.5;
		}
		else if (score == "B+") {
			m = 3.5;
		}
		else if (score == "C+") {
			m = 2.5;
		}
		else if (score == "D+") {
			m = 1.5;
		}
		else if (score == "F") {
			m = 0;
		}

		count += n;
		avg += n * m;
	}

	if (count == 0) {
		std::cout << "0.000000";
		return;
	}

	std::cout.precision(6);
	std::cout << std::fixed;
	std::cout << avg / count;
}