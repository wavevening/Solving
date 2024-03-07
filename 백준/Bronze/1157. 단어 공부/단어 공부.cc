#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    std::string S;

    cin >> S;
    char arr[26]{};
    int asc = 65;
    int count[26]{};
    int result = 0;
    int max = 0;
    char pick;


    // 배열에 알파벳 넣기 
    for (int i = 0; i < 26; i++) {
        arr[i] = asc;
        asc++;
    }
        

    // 문자열의 각 문자를 대문자로 변환
    for (char& changeS : S) {
        changeS = std::toupper(changeS);
    }

    for (char c : S) {
        for (int i = 0; i < 26; i++)
            if (c == arr[i]){
                count[i]++;
                if (count[i] > result) {
                    result = count[i];
                    pick = c;
                   }
             }
    }

    for (int i = 0; i < 26; i++) {
        if (result == count[i]) {
            max++;
        }
    }

    // 결과 출력
    if (max > 1) {
        cout << "?" << endl;
    }
    else {
        cout << pick << endl;
    }
}
