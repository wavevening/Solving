#include <iostream>
#include <string>

using namespace std;

int main() {

	int A, B, C;
	string Aa, Bb, Cc;

	cin >> A;
	cin >> B;
	cin >> C;

	Aa = to_string(A);
	Bb = to_string(B);
	
	Cc = Aa + Bb;
	int D = stoi(Cc);

	cout << A + B - C << '\n';
	cout << D - C;

	return 0;
}