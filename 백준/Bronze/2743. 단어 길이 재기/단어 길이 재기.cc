#include <string>
#include <iostream>
using namespace std;

int main() {
	string N;
	int A = 0;
	getline(cin, N);

	for (char c : N) {
		A++;
	}
	cout << A;
	return 0;
}