#include <iostream>
#include <string>
using namespace std;


int main()
{
	string ST;
	int cnt = 1;

	getline(cin, ST);


	for (int i = 0; i < ST.length(); i++)
	{
		if (ST[i] == ' ')
		{
			cnt++;
		}
	}

	if (ST[0] == ' ')
	{
		cnt--;
	}
	if (ST[ST.length() - 1] == ' ')
	{
		cnt--;
	}
	cout << cnt;

	return 0;
}