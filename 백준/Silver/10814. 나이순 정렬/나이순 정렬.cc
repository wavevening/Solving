#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    int age;
    string name;

    vector <pair<int, string>> member;

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        member.push_back(make_pair(age, name));
    }

    stable_sort(member.begin(), member.end(), [](auto& a, auto& b) {
        return a.first < b.first;
        });
    
    for (auto & p : member) {
        cout << p.first << " " << p.second << '\n';
    }

    return 0;
}
