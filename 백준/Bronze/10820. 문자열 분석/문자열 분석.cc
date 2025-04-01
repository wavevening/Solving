#include <iostream>
#include <string>

using namespace std;

int main() {

	
	string a;

	while (getline(cin, a)) {
		int small = 0;
		int upper = 0;
		int number = 0;
		int space = 0;

		for (char b : a) {
			if (b >= 'a' && b <= 'z') {
				small++;
			}
			else if (b >= 'A' && b <= 'Z') {
				upper++;
			}
			else if (b >= '0' && b <= '9') {
				number++;
			}
			else if (b == ' ') {
				space++;
			}
		}

		cout << small << " " << upper << " " << number << " " << space << "\n";
	}

	return 0;
}
	
	