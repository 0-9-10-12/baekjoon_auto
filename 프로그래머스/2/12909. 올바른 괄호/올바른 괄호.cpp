#include<string>
#include <iostream>

bool solution(std::string s)
{
	bool answer{ true };
	int count{};

	for (std::string::iterator i{ s.begin() }; i != s.end(); ++i) {
		if (*i == '(') {
			count++;
		}
		if (*i == ')') {
			count--;
		}

		if (count < 0) {
			break;
		}
	}

	if (count != 0) {
		return false;
	}

	return answer;
}