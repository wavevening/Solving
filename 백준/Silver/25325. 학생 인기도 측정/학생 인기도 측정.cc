#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();  // 학생 이름을 받기 전에 남은 개행문자 처리

    // 학생 이름을 저장
    vector<string> students(n);
    map<string, int> popularity;  // 학생 이름을 키로, 인기도를 값으로 저장

    string str;
    getline(cin, str);  // 학생 이름 목록 입력 받기
    stringstream ss(str);

    // 학생 이름과 인기도 초기화
    int index = 0;
    while (ss >> students[index]) {
        popularity[students[index]] = 0;  // 초기 인기도는 0
        index++;
    }

    for (int i = 0; i < n; i++) {
        getline(cin, str);  // 각 학생이 좋아하는 학생 목록 받기
        stringstream ss(str);
        string likedStudent;
        while (ss >> likedStudent) {
            popularity[likedStudent]++;  
        }
    }

    vector<pair<string, int>> sortedPopularity(popularity.begin(), popularity.end());

    sort(sortedPopularity.begin(), sortedPopularity.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first; 
        }
        return a.second > b.second;  
        });

    // 결과 출력
    for (const auto& entry : sortedPopularity) {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}
