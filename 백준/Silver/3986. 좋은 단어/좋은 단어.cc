#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	int N;
	int count = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		stack<char> stack;
		string s;
		cin >> s;

		for (char a : s) {
			if (!stack.empty() && stack.top() == a) {
				stack.pop();
			}
			else {
				stack.push(a);
			}
		}

		if (stack.empty()) {
			count++;
			}
	}

		
	cout << count;
	
	return 0;
}