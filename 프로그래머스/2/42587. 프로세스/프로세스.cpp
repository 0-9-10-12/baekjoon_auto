#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<int> priorities, int location) {
    int answer{};
    
    std::vector<int>::iterator max{std::max_element(priorities.begin(), priorities.end())};
    
    for(;;) {
        for(int i{}; i < priorities.size(); ++i) {
            if(priorities[i] == *max) {
                ++answer;
                
                priorities[i] = 0;
                
                max = std::max_element(priorities.begin(), priorities.end());
                
                if(i == location){
                    return answer;
                }
            }
        }
    }
    
    return answer;
}