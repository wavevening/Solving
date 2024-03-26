#include <iostream>
using namespace std;

class Stack {
private:
	int* StackArray;
	int x;
	int top;
	int pop_N;
	int arr_Size;

public:
	Stack(int arr_Size) : arr_Size(arr_Size), top (-1)
	{
		StackArray = new int[arr_Size];
	}
	~Stack() {
		delete[] StackArray;
	}

	int get_top()
	{
		if (top != -1) {
			return StackArray[top];
		}
		else {
			return -1;
		}
	}
	void push(int x)
	{
			top++;
			StackArray[top] = x;
	}
	int pop()
	{
		if (top != -1) {
			pop_N = StackArray[top];
			top--;
			return pop_N;
		}
		else 
			return -1;
	}
	int size() {
		return top + 1;
	}
	int empty() {
		return (top == -1) ? 1 : 0;
	}
};


int main() {
	int N;
	int x;
	string string;
	Stack arr(10000);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> string;

		if (string == "push") {
			cin >> x;
			arr.push(x);
		}
		else if (string == "pop") {
			cout << arr.pop() << endl;
		}
		else if (string == "size") {
			cout << arr.size() << endl;
		}
		else if (string == "empty") {
			cout << arr.empty() << endl;
		}		
		else if (string == "top") {
			cout << arr.get_top() << endl;
		}
	}
	return 0;
}