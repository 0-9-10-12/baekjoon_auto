#include <iostream>
#include <vector>
#include <algorithm> /*sort*/

bool solution(std::vector<std::string> phone_book) {
    bool answer{ true };

    std::sort(phone_book.begin(), phone_book.end());

    for (std::vector<std::string>::iterator it{ phone_book.begin() }; it != phone_book.end() - 1; ++it) {
        if (std::next(it)->substr(0, it->size()) == *it)    // *it == std::next(it)->substr(0, it->size()) 로 하면 시간 초과
            answer = false;
    }

    return answer;
}