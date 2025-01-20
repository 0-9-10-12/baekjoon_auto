#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

int solution(int k, std::vector<std::vector<int>> dungeons) {
	int answer{};

	std::sort(dungeons.begin(), dungeons.end());
	do {
		//for (auto a : dungeons) {
		//	std::cout << a[0] << ", " << a[1] << std::endl;
		//}
		//std::cout << "---------------" << std::endl;

		int MaxAns{};
		int fatigue{k};

		for (int i{}; i < dungeons.size(); ++i) {
			if (fatigue >= dungeons[i][0]) {
				fatigue -= dungeons[i][1];
				++MaxAns;
			}
		}

		if (answer < MaxAns) {
			answer = MaxAns;
		}

		if (answer == dungeons.size()) {
			break;
		}

	} while (std::next_permutation(dungeons.begin(), dungeons.end()));


	//std::cout << answer;

	return answer;
}