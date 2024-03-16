#include <iostream>
using namespace std;

int main()
{
	int n;
	int result = 1;
	cin >> n;
	if (n == 0)                    
	{
		cout << 1 << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++)   
	{
		result *= i;
	}
	cout << result << endl;           
    
	return 0;
}