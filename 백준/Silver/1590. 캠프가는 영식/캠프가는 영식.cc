#include <iostream>
#include <set>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, T, S, I, C;

    set<int> Time;

    cin >> N >> T;

    for (int i = 0; i < N; i++) {
        cin >> S >> I >> C;
        for (int j = 0; j < C; j++) {
            Time.insert(S + j * I);
        }
    }

    for (auto it = Time.begin(); it != Time.end(); it++) {
        if (*it >= T) {
            cout << *it - T;
            return 0;
        }
    }
    cout << -1;

    return 0;
}
