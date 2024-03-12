#include <iostream>
using namespace std;

int d(int n) {
	int result = n + (n / 10000) + (n % 10000 / 1000 + n % 10000 % 1000 / 100) + (n % 10000 % 1000 % 100 / 10) + (n % 10000 % 1000 % 100 % 10);

	return result;
}


int main() {
	int arr[10001]{0};	

	int i = 1;

	while (i <= 10000) {
		int result = d(i);
		if (result <= 10000) {
			arr[result] = 1;
		}
		i++;
	}
	
	for (int j = 1; j <= 10000; j++)
	{
		if (arr[j] == 0)
			cout << j << endl;
	}
	return 0;
}