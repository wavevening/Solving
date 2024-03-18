#include <iostream>
#include <string>
using namespace std;
int main() {
	string A;
	string B = "1 2 3 4 5 6 7 8";
	string C = "8 7 6 5 4 3 2 1";
	getline(cin, A);

	int result = A.compare(B);
	int result2 = A.compare(C);


	if (result == 0)
	{
		cout << "ascending";
	}
	else if (result2 == 0)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}

	return 0;

}