#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands) {
	std::vector<int> answer;

	for (auto it{ commands.begin() }; it != commands.end(); ++it) {
		auto it_it{ it->begin() };
		auto start = *it_it;
		auto end = *(++it_it);

		std::vector<int> temp(array.begin() + start - 1, array.begin() + end);

		std::sort(temp.begin(), temp.end());

		answer.push_back(temp.at(*(++it_it) - 1));
	}

	return answer;
}