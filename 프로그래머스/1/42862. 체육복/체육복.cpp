
#include <iostream>
#include <vector>
#include <algorithm>

int solution(int n, std::vector<int> lost, std::vector<int> reserve) {
    int answer{};
    std::sort(lost.begin(), lost.end());
    std::sort(reserve.begin(), reserve.end());

    for (auto it{ lost.begin() }; it != lost.end();) {
        auto find = std::find(reserve.begin(), reserve.end(), *it);
        if (find != reserve.end()) {
            reserve.erase(find);
            it = lost.erase(it);
        }
        else {
            ++it;
        }
    }

    for (auto it{ lost.begin() }; it != lost.end();) {
        bool find{ false };
        for (auto j{ reserve.begin() }; j != reserve.end(); ++j) {
            if (*it == *j - 1 || *it == *j + 1) {
                std::cout << "-" << *j << "-" << "\n";
                j = reserve.erase(j);
                find = true;
                break;
            }
        }
        if (find) {
            std::cout << "&" << *it << "&" << "\n";
            it = lost.erase(it);
        }
        else {
            ++it;
        }
    }

    answer = n - lost.size();

    return answer;
}