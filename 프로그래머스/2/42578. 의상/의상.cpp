#include <string>
#include <vector>
#include <algorithm> /*sort*/

int solution(std::vector<std::vector<std::string>> clothes) {
    std::sort(clothes.begin(), clothes.end(), [](const std::vector<std::string> &a, const std::vector<std::string> &b) {
        return a[1] < b[1];
    });

    int count[50]{};
    int categoryCount{};
    std::string categoryName{};

    for (const std::vector<std::string> &cloth : clothes) {  // 같은 이름 카운트
        if (cloth[1] != categoryName) {
            categoryName = cloth[1];
            ++categoryCount;
        }
        ++count[categoryCount - 1];
    }

    int result{ 1 };
    for (int i{}; i < categoryCount; ++i) {
        result *= count[i] + 1;
    }

    return result - 1;
}
