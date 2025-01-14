#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<int> citations) {
    int answer{};
    std::sort(citations.begin(), citations.end(), std::greater<int>());

    for (int i{}; i < citations.size(); ++i) {
        if (citations[i] >= i + 1) {
            answer = i + 1;
        }
    }

    return answer;
}