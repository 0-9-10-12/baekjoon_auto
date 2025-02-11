#include <iostream>
#include <string>

class Stack {
	int stack_size;
	int stack_top;
	int* stack;
public:
	Stack(int i = 10000);
	~Stack() { delete[] stack; }
	void push(int i);
	void pop();
	void size();
	void empty();
	void top();
};

Stack::Stack(int i) : stack_size(0), stack_top(-1) {
	stack = new int[i];
}

void Stack::push(int i) {
	stack[stack_size] = i;
	stack_top = i;
	++stack_size;
}

void Stack::pop() {
	std::cout << stack_top << std::endl;
	if (stack_size > 0) {
		--stack_size;
		stack_top = (stack_size == 0) ? -1 : stack[stack_size - 1];
	}
	else {
		stack_top = -1;
	}
}

void Stack::size() {
	std::cout << stack_size << std::endl;
}

void Stack::empty() {
	std::cout << (stack_size == 0 ? 1 : 0) << std::endl;
}

void Stack::top() {
	std::cout << stack_top << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	Stack stack;

	int i{};
	std::cin >> i;

	for (int k{}; k < i; ++k) {
		std::string s;
		std::cin >> s;

		if (s == "push") {
			int n;
			std::cin >> n;
			stack.push(n);
		}
		if (s == "pop")
			stack.pop();
		if (s == "size")
			stack.size();
		if (s == "empty")
			stack.empty();
		if (s == "top")
			stack.top();
	}
}