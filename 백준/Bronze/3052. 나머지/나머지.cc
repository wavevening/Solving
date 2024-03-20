#include <iostream>
using namespace std;
int main() {
	int count = 0;
	int A[42]{};
	int a;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		if (A[a % 42] == 0) {
			A[a % 42] += 1;
			count++;
		}
		else
			continue;
	}

	cout << count;

	return 0;
}