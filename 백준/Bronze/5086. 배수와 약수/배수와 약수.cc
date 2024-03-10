#include <iostream>
using namespace std;
int main() {
	int A = 0;
	int B = 0;
	while (1) {
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		if (B % A == 0)
			cout << "factor" << endl;
		else if (A % B == 0)
			cout << "multiple" << endl;
		else
			cout << "neither" << endl;
	}
	return 0;
}