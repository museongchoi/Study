#include <iostream>
using namespace std;

int main()
{
	int T, A, B;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << endl;
	}

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int t, a, b;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return 0;
}