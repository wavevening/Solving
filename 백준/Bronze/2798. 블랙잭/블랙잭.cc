#include <vector>
#include <iostream>

using namespace std;

int main() {
    int N, M;
    int closest = 0;
    int temp;

    cin >> N >> M;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                temp = v[i] + v[j] + v[k];

				if (temp <= M && temp > closest) {
					closest = temp;
				}
			}
		}
	}

	cout << closest;
	return 0;
}