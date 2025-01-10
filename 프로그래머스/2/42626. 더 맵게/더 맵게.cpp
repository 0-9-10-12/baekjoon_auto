#include <string>
#include <vector>
#include <queue>

int solution(std::vector<int> scoville, int K) {
	int answer{};

	std::priority_queue<int, std::vector<int>, std::greater<int>> q(scoville.begin(), scoville.end());

	int temp1{};
	int temp2{};
	for (;;) {
		if (q.top() < K) {
			temp1 = q.top();
			q.pop();
			temp2 = q.top();
			q.pop();

			q.push(temp1 + temp2 * 2);

			++answer;

		}

		if (q.top() >= K) {
			break;
		}
		if (q.size() < 2) {
			return -1;
		}
	}

	return answer;
}