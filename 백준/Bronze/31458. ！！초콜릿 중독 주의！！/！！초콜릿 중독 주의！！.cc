#include <iostream> 
#include <string>
using namespace std;

int main() {
	int T;
	string a;
	
	
	

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> a;
		int count = 0;
		int arr[2]{ 0 };
		int result = 0;

		for (char b : a) {
			if (count == 0) {
				if (b == '!') {
					arr[count]++;
				}
				else if (b >= '0' && b <= '9')
					count++;
				result = b - '0';
			}
			else if (count == 1) {
				arr[1]++;
			}
		}
		// 팩토리얼 구현 먼저
		if (arr[1] >= 1) {
			result = 1;
		}

		if (arr[0] % 2 != 0) {
			result = (result) ? 0 : 1;
		}

		cout << result << "\n";


	}
	return 0;
}