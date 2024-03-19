#include <iostream>
#include <cstring>
using namespace std;

int main() {
 	int ap[26] ;
	string S;
 	cin >> S;
	int count = 0;

	std::memset(ap, -1, sizeof(ap));

	for (char c : S) {
		int i = c - 97;

		if (ap[i] == -1) {
			ap[i] = count;
			count++;
		}
		else {
			++count;
			continue;
		}
	} 

	for (int j = 0; j <= 25; j++) {
		cout << ap[j] << " ";
	}
	
	return 0;
}
