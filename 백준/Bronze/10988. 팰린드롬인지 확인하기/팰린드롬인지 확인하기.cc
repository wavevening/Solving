#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	string A, B;

	cin >> A;

	B = A;

	reverse(B.begin(), B.end());

	if (A.compare(B) == 0) {
		cout << 1;
	}
	else
		cout << 0;


	return 0;
}