#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;

	cin >> N;

	if (N != 1) {
		string s1;
		cin >> s1;
		vector<char> result(s1.size());


		for (int i = 0; i < N - 1; i++) {
			string s2;
			cin >> s2;

			for (int i = 0; i < s1.size(); i++) {
				if (s1[i] == s2[i])
					result[i] = s1[i];
				else
					result[i] = '?';
			}
			string str(result.begin(), result.end());
			s1 = str;
		}
		cout << s1;
	}
	else {
		string s1;
		cin >> s1;
		cout << s1;
	}
	return 0;
}