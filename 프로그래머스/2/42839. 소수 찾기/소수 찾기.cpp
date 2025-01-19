#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
	for (int i = 2; i <= std::sqrt(n); i++) {
		if (0 == n % i)
			return false;
	}
	return true;
}


int solution(std::string numbers) {
	int answer{};
	std::set<int> ans{};

	sort(numbers.begin(), numbers.end());

    do {
        std::string tmp;
        for (int i{}; i < numbers.size(); ++i) {
            tmp += numbers[i];
            if (isPrime(stoi(tmp)))
                ans.insert(stoi(tmp));
        }
    } while (std::next_permutation(numbers.begin(), numbers.end()));

    answer = ans.size();

    return answer;
}