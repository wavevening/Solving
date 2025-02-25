#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int r = 31;
	int M = 1234567891;
	int hash = 0;
	int sum = 0;
	int n;

	char c; 

	cin >> n; 


	for (int i = 0; i < n; i++) {
		cin >> c;
		hash = (c - 96) * static_cast<int>(pow(31, i)) % M;
		sum += hash;
	}

	cout << sum;

	return 0;
}