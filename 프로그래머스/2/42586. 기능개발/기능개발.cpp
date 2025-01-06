#include <vector>
#include <queue>
#include <iostream>

std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds) {
	std::vector<int> answer;
	std::queue<int> d;

	int size{(int)speeds.size()};
	
	for (int i = 0; i < size; ++i)
		d.push(i);

	while (!d.empty()) {
		int count{};
		for (int j{}; j < size; ++j) {
			progresses[j] += speeds[j];
		}
		while(!d.empty() && progresses[d.front()] >= 100) {
			d.pop();
			++count;
		}
		if (count) {
			answer.push_back(count);
		}
	}

	return answer;
}