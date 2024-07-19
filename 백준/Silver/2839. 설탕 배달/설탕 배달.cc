#include <iostream>
using namespace std;
int main() {

	int N;
	cin >> N;

	int three_kg = 0;
	int five_kg = 0;

	if (N % 5 == 0) {
		five_kg = N / 5;
		cout << five_kg;
	}

	else {
		while (N % 5 != 0 && N >= 0) {
			N -= 3;
			three_kg++;
		}

		if (N % 5 == 0) {
			five_kg = N / 5;
			cout << five_kg + three_kg;
		}

		else {
			cout << -1;
		}
	}

	return 0;
}