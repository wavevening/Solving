#include <iostream>
using namespace std;

int main() {
	long long M = 1234567891;
	int r = 31;
	int n;

	long long hash = 0;
	long long R = 1;

	char c; 

	cin >> n; 

	for (int i = 0; i < n; i++) {
		cin >> c;
		hash = ((hash + (c - 96) * R) % M);
		R = (r * R) % M;
	}

	cout << hash;

	return 0;
}
