#include <iostream>
using namespace std;

int main()
{
	int T, A, B;
	char Comma;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> Comma >> B;
		cout << A + B << endl;
	}

	return 0;
}