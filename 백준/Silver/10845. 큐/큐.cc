// 10845 queue
#include <iostream>
#include <string>

class Queue {
	int queue_size;
	int* queue;
public:
	Queue(int i = 200'000);
	void push(int i);
	void pop();
	void size();
	void empty();
	void front();
	void back();
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	Queue queue;

	int i{};
	std::cin >> i;

	for (; i--;) {
		std::string s;
		std::cin >> s;

		if (s == "push") {
			int n;
			std::cin >> n;
			queue.push(n);
		}
		if (s == "pop")
			queue.pop();
		if (s == "size")
			queue.size();
		if (s == "empty")
			queue.empty();
		if (s == "front")
			queue.front();
		if (s == "back")
			queue.back();
	}
}

Queue::Queue(int i)
{
	queue = new int[i];
	queue_size = -1;
}

void Queue::push(int i)
{
	++queue_size;
	queue[queue_size] = i;
}

void Queue::pop()
{
	if (queue_size == -1) {
		std::cout << "-1" << '\n';
		return;
	}

	std::cout << queue[0] << '\n';

	for (int i{}; i < queue_size + 1; ++i)
		queue[i] = queue[i + 1];

	if (queue_size + 1 != 0)
		--queue_size;
}

void Queue::size()
{
	std::cout << queue_size + 1 << '\n';
}

void Queue::empty()
{
	if (queue_size == -1)
		std::cout << "1" << '\n';
	else
		std::cout << "0" << '\n';
}

void Queue::front()
{
	if (queue_size == -1) {
		std::cout << "-1" << '\n';
		return;
	}

	std::cout << queue[0] << '\n';
}

void Queue::back()
{
	if (queue_size == -1) {
		std::cout << "-1" << '\n';
		return;
	}

	std::cout << queue[queue_size] << '\n';
}