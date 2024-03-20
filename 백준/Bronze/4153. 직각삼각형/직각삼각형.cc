#include <iostream>
using namespace std;
int main() {
	long A, B, C;

	while (1) {
		cin >> A >> B >> C;

		if (A == 0 && B == 0 && C == 0)
			break;

		if (A * A + B * B == C * C || A * A + C * C == B * B || C * C + B * B == A * A) {
			cout << "right" << endl;
		}
		else
			cout << "wrong" << endl;

	}
	return 0;
}