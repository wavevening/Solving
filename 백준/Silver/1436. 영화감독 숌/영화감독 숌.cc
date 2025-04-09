#include <iostream>
#include <string>

using namespace std;

int main() {
	int count = 0;
	int result = 666;
	int N;

	cin >> N;

	while (1) {
		string s_result = to_string(result);

		if (s_result.find("666") != string::npos) {
			count++;
			if (count == N) {
				cout << result;
				break;
			}
		}
		result++;
	}
	return 0;

}
