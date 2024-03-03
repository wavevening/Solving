#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    string P;
    int T;
    int R;

    cin >> T;

    while (T--) {
        cin >> R >> S;
        for (char c : S) {
            for (int i = 0; i < R; ++i) {
                P += c;
            }
        }
        cout << P << endl;
        P.clear(); // P 초기화
    }

    return 0;
}