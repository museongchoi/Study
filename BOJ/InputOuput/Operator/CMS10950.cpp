// 10950 A+B - 3
#include <iostream>
using namespace std;

int main()
{
	int T;
	int A;
	int B;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		A = B = 0;
		cin >> A >> B;

		cout << A + B << endl;
	}

	return 0;
}