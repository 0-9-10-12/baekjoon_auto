#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer{};
    int temp{static_cast<int>(nums.size() / 2)};

    std::sort(nums.begin(), nums.end());
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());

    if (nums.size() > temp)
        answer = temp;
    else
        answer = nums.size();
    
    return answer;
}