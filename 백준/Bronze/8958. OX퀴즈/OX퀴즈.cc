#include <iostream>
#include <string>
using namespace std;
int main() {
	int forN;
	string ox;

	cin >> forN;
	cin.ignore();

	for (int i = 1; i <= forN; i++) {

		int point = 0;
		int result = 0;

		getline(cin, ox);

		for (char c : ox) {
			if (c == 'O') {
				point++;
				result += point;
			}
			else if (c == 'X')
			{
				point = 0;
			}

			
		}
		cout << result << endl;
	}

	return 0;
}