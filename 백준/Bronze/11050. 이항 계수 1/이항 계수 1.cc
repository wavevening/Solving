#include <iostream>

using namespace std;

int Fac(int num) {
	if (num == 0) {
		return 1;
	}
	else if (num == 1) {
		return 1;
	}
	else
		return num * Fac(num - 1);
}

int main() {
	int n, k;
	cin >> n >> k;

	cout << Fac(n) / (Fac((n - k)) * Fac(k));

	return 0;
}