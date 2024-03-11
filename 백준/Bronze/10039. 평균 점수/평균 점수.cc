#include <iostream>
using namespace std;
int main() {
	int A, B, C, D, E;
	cin >> A;
	if (A < 40)
		A = 40;

	cin >> B;
	if (B < 40)
		B = 40;

	cin >> C;
	if (C < 40)
		C = 40;

	cin >> D;
	if (D < 40)
		D = 40;

	cin >> E;
	if (E < 40)
		E = 40;

	cout << (A + B + C + E + D) / 5;

}