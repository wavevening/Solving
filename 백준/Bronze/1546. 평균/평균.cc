#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	long double max = 0;
	long double sum = 0;

	cin >> n;

	vector<long double> v1(n);

	for (int i = 0; i < n; i++) {
		cin >> v1[i];
		if (v1[i] > max) {
			max = v1[i];
		}
	}

	for (int i = 0; i < n; i++) {
		sum += v1[i] / max * 100;
	}

	printf("%.10Lf\n", sum / n);

	return 0;
}