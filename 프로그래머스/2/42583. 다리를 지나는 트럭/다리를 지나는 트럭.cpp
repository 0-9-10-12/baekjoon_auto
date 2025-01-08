#include <string>
#include <deque>
#include <vector>

int solution(int bridge_length, int weight, std::vector<int> truck_weights) {
    int answer{};
    std::deque<int> d;

    int totalWeight{};
    //int bridge{};
    for (std::vector<int>::iterator it{ truck_weights.begin() }; it != truck_weights.end();) {
        if (d.size() >= bridge_length) {
            totalWeight -= *d.begin();
            d.pop_front();  // 얘만 아니면 vector인데
            //--bridge;
        }

        if (totalWeight + *it <= weight) {
            d.push_back(*it);
            totalWeight += *it;
            ++it;
        }
        else {
            d.push_back(0); // 크기 비교 해야해서 넣어야한대
        }

        ++answer;
        //++bridge;
    }

    answer += bridge_length;    // 마지막 애 건너는 시간

    return answer;
}