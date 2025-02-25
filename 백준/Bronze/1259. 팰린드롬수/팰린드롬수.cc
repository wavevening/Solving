#include <iostream>
#include <string>
using namespace std;

int main() {

	string test;
	int n;

	while (1) {
		cin >> test;
		if (test == "0")
			break;
		bool isP = true;
		int front = 0;
		int back = size(test) - 1;
		
		while (front < back) {
			if (test[front] != test[back]) {
				isP = false;
				break;
			}
			front++;
			back--;
		}
		if (isP)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
	
	return 0;
}
