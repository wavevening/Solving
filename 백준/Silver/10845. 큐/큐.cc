#include <iostream>

using namespace std;

class Queue {
private:
	int* Queue1;
	int front_p;
	int rear_p;
	int X;
	int Q_size;

public:
	Queue(int Q_size)
		: Q_size(Q_size), front_p(0), rear_p(0)
	{
		Queue1 = new int[Q_size];
	}

	~Queue() {
		delete[] Queue1;
	}

	void push(int X) {
		rear_p++;
		Queue1[rear_p] = X;
	}

	int pop()
	{
		if (front_p == rear_p)
			return -1;
		else
			front_p++;
		X = Queue1[front_p];
		return X;
	}

	int size() {
		return abs(rear_p - front_p);
	}

	int empty() {
		if (front_p == rear_p)
			return 1;
		else
			return 0;
	}

	int front() {
		if (front_p == rear_p)
			return -1;
		else
			return Queue1[front_p + 1];
	}
	int back() {
		if (front_p == rear_p)
			return -1;
		else
			return Queue1[rear_p];
	}
};

int main() {
	int N;
	Queue Queue1(10000);
	cin >> N;
	string string;
	int x;


	for (int i = 0; i < N; i++) {
		cin >> string;

		if (string == "push") {
			cin >> x;
			Queue1.push(x);
		}
		else if (string == "pop") {
			cout << Queue1.pop() << endl;
		}
		else if (string == "size") {
			cout << Queue1.size() << endl;
		}
		else if (string == "empty") {
			cout << Queue1.empty() << endl;
		}
		else if (string == "front") {
			cout << Queue1.front() << endl;
		}
		else if (string == "back") {
			cout << Queue1.back() << endl;
		}
	}
	return 0;

}