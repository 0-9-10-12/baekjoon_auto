#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<std::vector<int>> sizes) {

    int answer{};

    for (auto it{ sizes.begin() }; it != sizes.end(); ++it) {
        std::sort(it->begin(), it->end());
    }

    int max{}, min{};
    for (const auto &a : sizes) {
        if (min < *a.begin())
            min = *a.begin();
        if (max < *(++a.begin()))
            max = *(++a.begin());
    }

    answer = max * min;


    return answer;
}