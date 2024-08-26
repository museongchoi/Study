#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ST = "";
	cin >> ST;
	//getline(cin, ST);

	for (int i = 0; i < ST.length(); i += 10)
	{
		cout << ST.substr(i, 10) << "\n";
	}

	return 0;
}