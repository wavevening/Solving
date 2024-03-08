#include <iostream>
#include <string>

using namespace std;
int main() {
	int A, B, C;
	string result;

	cin >> A;
	cin >> B;
	cin >> C;

	result = to_string(A * B * C);

	char count[10];
	int counter[10]{};

	for (int i = 0; i < 10; i++) {
		count[i] = '0' + i;
	}

	for (char &c : result) {
		for (int i = 0; i < 10; i++)
			if (count[i] == c)
				counter[i]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << counter[i] << endl;
	}

	return 0;
}