#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> solution(std::vector<int> answers) {
    std::vector<int> answer;

    int countOne{};
    std::vector<int> one{};
    for (int i{}; i < answers.size();) {
        one.push_back(1);;
        if (answers[i] == one[i])
            countOne++;
        ++i;
        one.push_back(2);
        if (answers[i] == one[i])
            countOne++;
        ++i;
        one.push_back(3);
        if (answers[i] == one[i])
            countOne++;
        ++i;
        one.push_back(4);
        if (answers[i] == one[i])
            countOne++;
        ++i;
        one.push_back(5);
        if (answers[i] == one[i])
            countOne++;
        ++i;
    }
   
    int countTwo{};
    std::vector<int> two{};
    for (int i{}; i < answers.size();) {
        two.push_back(2);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
        two.push_back(1);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
        two.push_back(2);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
        two.push_back(3);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
        two.push_back(2);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
        two.push_back(4);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
        two.push_back(2);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
        two.push_back(5);
        if (answers[i] == two[i])
            countTwo++;
        ++i;
    }
    
    int countThree{};
    std::vector<int> three{};
    for (int i{}; i < answers.size();) {
        three.push_back(3);
        if (answers[i] == three[i])
            countThree++;
        ++i;
        three.push_back(3);
        if (answers[i] == three[i])
            countThree++;
        ++i; three.push_back(1);
        three.push_back(1);
        if (answers[i] == three[i])
            countThree++;
        ++i; three.push_back(2);
        three.push_back(2);
        if (answers[i] == three[i])
            countThree++;
        ++i; three.push_back(4);
        three.push_back(4);
        if (answers[i] == three[i])
            countThree++;
        ++i; three.push_back(5);
        three.push_back(5);
        if (answers[i] == three[i])
            countThree++;
        ++i;
    }

    int max{ std::max({ countOne, countTwo, countThree }) };

    if (countOne == max)
        answer.push_back(1);
    if (countTwo == max)
        answer.push_back(2);
    if (countThree == max)
        answer.push_back(3);

    return answer;
}