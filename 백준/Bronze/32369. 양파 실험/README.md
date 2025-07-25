# [Bronze IV] 양파 실험 - 32369 

[문제 링크](https://www.acmicpc.net/problem/32369) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 시뮬레이션

### 제출 일자

2025년 7월 25일 12:18:00

### 문제 설명

<p>영현이는 학생들에게 교훈을 주기 위해 '양파 실험'을 하려고 합니다. 양파 실험은 양파에 칭찬과 비난을 했을 때 성장 속도를 비교하는 실험입니다.</p>

<p>'칭찬 양파'가 '비난 양파'보다 빨리 자라는 결과를 기대했지만, 학생들의 디스랩에 감명을 받은 '비난 양파'가 더 빨리 자라버리고 말았습니다.</p>

<p>영현이는 어쩔 수 없이 실험을 조작하기로 했고, 다음과 같은 방법으로 실험을 진행합니다.</p>

<p>두 양파의 처음 길이는 $1$입니다. 하나의 양파에 '칭찬 양파' 역할을 부여하고, 다른 하나의 양파에 '비난 양파' 역할을 부여합니다.</p>

<ol>
	<li>학생들은 매일 '칭찬 양파'에 칭찬을, '비난 양파'에는 비난을 합니다. 양파에 칭찬하면 $A$만큼, 양파에 비난하면 $B$만큼 자랍니다. (단, $A < B$)</li>
	<li>양파를 확인해 '칭찬 양파' 보다 '비난 양파'가 더 길면 두 양파의 역할을 바꿉니다.</li>
	<li>두 양파의 길이가 같으면 '비난 양파'의 길이를 $1$만큼 자릅니다.</li>
</ol>

<p>실험을 진행하는 동안 매일 1, 2, 3 과정을 순서대로 진행합니다.</p>

<p>$N$일이 지났을 때 실험의 결과를 출력해주세요.</p>

### 입력 

 <p>첫 번째 줄에 실험이 진행되는 $N$일과 양파에 칭찬하면 자라는 길이 $A$, 양파에 비난하면 자라는 길이 $B$가 주어집니다. ($1 ≤ N ≤ 100, 1 ≤ A < B ≤ 10$, $N, A, B$는 모두 정수입니다.)</p>

### 출력 

 <p>실험이 종료되었을 때 '칭찬 양파'의 길이와 '비난 양파'의 길이를 각각 출력해주세요.</p>

