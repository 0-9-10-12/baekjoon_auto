#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

std::string solution(std::vector<int> numbers) {
	std::string answer{};
	std::vector<std::string> v;

	v.reserve(numbers.size());
	std::transform(numbers.begin(), numbers.end(), std::back_inserter(v), [](int num) {
		return std::to_string(num);
	});

	std::sort(v.begin(), v.end(), [](const std::string &a, const std::string &b) {
		return a + b > b + a;
	});
	
	for (std::vector<std::string>::iterator::value_type a : v) {
		answer += a;
	}

	if ('0' == *answer.begin()) {
		answer = "0";
	}
	
	//std::cout << answer;

	return answer;
}