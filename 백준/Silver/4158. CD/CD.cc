#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;

	unordered_map<int, bool> CD;
	while (true) {

		cin >> N >> M;

		if (N == 0 && M == 0)
			break;

		CD.clear();

		int count = 0;
		for (int i = 0; i < N; i++) {
			int a;
			cin >> a;
			CD[a] = 1;
		}

		for (int j = 0; j < M; j++) {
			int b;
			cin >> b;
			if (CD[b] == 1) {
				count++;
			}
		}

		cout << count << '\n';
	}
	return 0;
}