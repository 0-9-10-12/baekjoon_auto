#include <string>
#include <vector>
#include <algorithm>

std::string solution(std::vector<std::string> participant, std::vector<std::string> completion) {
    std::string answer = "";
    
    std::sort(participant.begin(), participant.end());
    std::sort(completion.begin(), completion.end());

    for (int i{}; i < participant.size(); ++i) {
        if (i == participant.size() - 1) {
            answer = *(participant.begin() + i);
        }
        else if (*(participant.begin() + i) != *(completion.begin() + i)) {
            answer = *(participant.begin() + i);
            break;
        }
    }

    return answer;
}