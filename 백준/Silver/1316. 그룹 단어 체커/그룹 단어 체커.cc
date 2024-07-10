#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int word_count = 0;
	int N;
	string word;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> word;
		bool Judgment = true;

		word.erase(unique(word.begin(), word.end()), word.end());
		sort(word.begin(), word.end());

		for (int j = 0; j < word.length() - 1; j++) {
			if (word[j] == word[j + 1]) {
				Judgment = false;
				break;
			}
		}
		if (Judgment) {
			word_count++;
		}
	}

	cout << word_count;
			
	return 0;

	}