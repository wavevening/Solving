#include <iostream>
using namespace std;

int main() {
	int H, W, N, rH, rR, T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;


		//층 
		if (H >= N) {// 최고층
			rH = N;
			rR = 1;
		}
		else if (N % H == 0) {// 배수
			rH = H;
			rR = N / H;
		}
		else {
			rH = N % H;
			rR = N / H + 1;
		}



		// 출력
		if (rR < 10)
		{
			cout << rH << 0 << rR << endl;
		}
		else
			cout << rH << rR << endl;
	}

	return 0;
}