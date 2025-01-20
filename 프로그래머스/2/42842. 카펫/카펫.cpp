#include <string>
#include <vector>
#include <iostream>
#include <cmath>

std::vector<int> solution(int brown, int yellow) {
    std::vector<int> answer;
    
    double x{}, y{};

    y = ((4 + brown) + std::sqrt((-1 * (4 + brown)) * (-1 * (4 + brown)) - 4 * 2 * ((2 * brown) + (2 * yellow)))) / (2 * 2);

    x = (brown + yellow) / y;

    if (x > y) {
        answer.push_back(x);
        answer.push_back(y);
    }
    else {
        answer.push_back(y);
        answer.push_back(x);
    }

    std::cout << x << " " << y;

    return answer;
}