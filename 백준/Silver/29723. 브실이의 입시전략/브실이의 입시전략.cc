#include <iostream>
#include <set>

using namespace std;

int main() {

	int N, M, K;
	set<pair<int, string>> score;

	cin >> N >> M >> K;

	for (int i = 0; i < N; i++) {
		string name;
		int sc;

		cin >> name >> sc;

		score.insert(make_pair(sc, name));
	}

	int count = 0;

	for (int i = 0; i < K; i++) {
		string regi;
		cin >> regi;

		for (auto it = score.begin(); it != score.end();) {
			if (it->second == regi) {
				count += it->first;
				it = score.erase(it);
			}
			else
				it++;
		}
	}

	int min = count;
	int max = count;
	int remain = M - K;

	for (int i = 0; i < remain; i++) {
		auto it = score.begin();
		advance(it, i); 
		min += it->first;
	}

	for (int i = 0; i < remain; i++) {
		auto it = score.rbegin();
		advance(it, i);
		max += it->first;
	}

	cout << min << " " << max;

	return 0;
}