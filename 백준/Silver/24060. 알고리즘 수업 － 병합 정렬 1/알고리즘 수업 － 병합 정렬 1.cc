#include <iostream>

int N, K, Count;
int A[500'005], Temp[500'005], Ans;

void MergeSort(int Start, int End) {
	if (Start >= End) 
		return;

	int Mid{(Start + End) / 2};

	MergeSort(Start, Mid);
	MergeSort(Mid + 1, End);

	if (Count >= K) 
		return;

	int i{Start}, j{Mid + 1}, k{Start};

	while (i <= Mid && j <= End) {
		if (A[i] <= A[j]) 
			Temp[k++] = A[i++];
		else {
			Temp[k++] = A[j++];
		} 
	}

	while (i <= Mid) {
		Temp[k++] = A[i++];
	} 
	while (j <= End) {
		Temp[k++] = A[j++];
	} 

	for (i= Start; i <= End; ++i) {
		A[i] = Temp[i];

		if (++Count == K) {
			Ans = A[i];
			break;
		}
	}
}

int main() {
	Ans = 0;
	std::cin >> N >> K;
	for (int i{1}; i <= N; ++i) {
		std::cin >> A[i];
	}

	MergeSort(1, N);
	if (Count < K) {
		std::cout << "-1\n";
	} 
	else {
		std::cout << Ans << "\n";
	} 

	return 0;
}