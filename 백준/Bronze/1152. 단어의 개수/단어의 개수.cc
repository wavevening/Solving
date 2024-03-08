#include <iostream>
#include <string>

using namespace std;

int countWords(const string& sentence) {
    int wordCount = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }

    if (inWord) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    string sentence;
    getline(cin, sentence);

    int wordCount = countWords(sentence);

    cout << wordCount << endl;

    return 0;
}
