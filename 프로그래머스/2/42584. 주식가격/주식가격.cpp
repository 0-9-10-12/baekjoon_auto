#include <string>
#include <vector>
#include <iostream>

std::vector<int> solution(std::vector<int> prices) {
	std::vector<int> answer;

	for (std::vector<int>::iterator i{ prices.begin() }; i != prices.end(); ++i) {
		int count{};

		for (std::vector<int>::iterator j{ i + 1 }; j != prices.end(); ++j) {
			if (*i <= *j) {
				++count;
			}
			else {
				++count;
				answer.push_back(count);
				break;
			}
			if (j == prices.end() - 1) {
				answer.push_back(count);
			}
		}
	}

	answer.push_back(0);

	std::cout << "\nanswer : ";

	for (auto a : answer)
		std::cout << a << " ";

	return answer;
}