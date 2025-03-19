#include <iostream>
#include <string>

using namespace std;

bool isNumber(const string N) {
	bool t = true;
	for (char a : N) {
		if (!isdigit(a))
			t = false;
	return t;
	}
}

int main() {
	string A, B, C;
	int n;

	cin >> A;
	cin >> B;
	cin >> C;

	if (isNumber(A))
		n = stoi(A) + 3;
	else if (isNumber(B))
		n = stoi(B) + 2;
	else if (isNumber(C))
		n = stoi(C) + 1;

	if (n % 3 == 0 && n % 5 == 0)
		cout << "FizzBuzz";
	else if (n % 3 == 0 && n % 5 != 0)
		cout << "Fizz";
	else if (n % 3 != 0 && n % 5 == 0)
		cout << "Buzz";
	else 
		cout << n;

	return 0;
}