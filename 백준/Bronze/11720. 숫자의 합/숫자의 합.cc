#include <iostream>
#include <string>

using namespace std;
int main() {
	string a;
	int b;

	cin >> b;
	cin >> a;

	int sum = 0;
	for (int i = 0; i < a.length(); i++)
		sum += a[i] - '0';


	cout << sum;
	return 0;
}