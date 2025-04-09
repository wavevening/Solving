#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> v;
	string s;

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), [](const string& a, const string& b) {
		if (a.length() != b.length())
			return a.length() < b.length();
		else
			return a < b;
		});

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
		return 0;
}