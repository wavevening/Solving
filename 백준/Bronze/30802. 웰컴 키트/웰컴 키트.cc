#include <iostream>

using namespace std;

int main() {
	int N, T, P;
	int setT = 0;
	int setPen, eachPen;

	cin >> N;
	int A[6];
	cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4] >> A[5]; 
	cin >> T >> P;

	for (int i = 0; i < 6; i++) {
		if (A[i] % T == 0) {
			setT += A[i] / T;
		}
		else if (A[i] % T != 0 && A[i] < T) {
			setT += 1;
		}
		else if (A[i] % T != 0 && A[i] > T) {
			setT += (A[i] / T + 1);
		}
	}
	
	setPen = N / P;
	eachPen = N % P;

	cout << setT << endl << setPen << " " << eachPen;

	return 0;
}