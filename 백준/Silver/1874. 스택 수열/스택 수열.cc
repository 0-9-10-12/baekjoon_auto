// 1874 stack sequence
/*
1 2 3 4   4 5 6   7 8   8 8 8 8
+ + + + - - + + - + + - - - - -		/	true

1   2   3 4 5   5 5
+ - + - + + + - - -		/ false

string s == stack -> true
*/
#include <iostream>
#include <string>
#include <stack>
#include <vector>

int main()
{
	std::stack<int> stk_i;

	std::vector<char> v_c;
	std::vector<int> v;
	std::vector<int> v_ans;

	int b{ 1 };

	int cnt;
	std::cin >> cnt;

	for (; cnt--;) {
		int a;
		std::cin >> a;
		v.push_back(a);
	}
	
	for (auto temp = v.begin(); temp != v.end(); ++temp) {
		for (; b < *temp; ++b) {
			stk_i.push(b);
			v_c.push_back('+');
		}
		if (b > *temp) {
			v_ans.push_back(stk_i.top());
			stk_i.pop();
			v_c.push_back('-');
		}
		if (b == *temp) {
			v_ans.push_back(b);
			v_c.push_back('+');
			v_c.push_back('-');
			++b;
		}
	}

	if (v_ans == v)
		for (auto aa : v_c)
			std::cout << aa << "\n";
	else
		std::cout << "NO\n";
}