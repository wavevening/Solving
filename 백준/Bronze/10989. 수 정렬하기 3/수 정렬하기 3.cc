#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int size;
	int n;

	cin >> size; //  크기
	int arr[10001]{ 0 };

	for (int i = 0; i < size; i++) {
		cin >> n;
		arr[n]++;
	} 

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}

	return 0;
}