#include <iostream>
using namespace std;

int main() {

	int H, M;
	int Change;

	cin >> H >> M; 

	if (H == 0)
		Change = 24 * 60 + M;
	else
		Change = H * 60 + M;

	int result = Change - 45;
	int rechangeH = result / 60 % 24; // % 24 incorrect
	int rechangeM = result % 60;

	cout << rechangeH << " " << rechangeM;

	return 0;
}