#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	string PS;
	cin >> N;

	for (int i = 0; i < N; i++) {
		bool Judge = true;
		int leftCount = 0;
		cin >> PS;
		for (char c : PS) {
			if (c == '(') {
				leftCount++;
			}
			else if (c == ')')
			{
				if (leftCount == 0) {
					Judge = false;
					break;
				}
				else
					leftCount--;
			}
		}
		if ((Judge == false) || (leftCount != 0))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;	
	}
	return 0;
}
