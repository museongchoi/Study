#include <iostream>

using namespace std;

// 1 <= x <= 12 && 1 <= y <= 31
// 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.
// 1월 1일 월요일

int main()
{
	string Day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int cntlist[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int x, y;
	x = 0;
	y = 0;
	cin >> x >> y;

	// x월의 전월까지에 총일수합.
	int SumDay = 0;
	for (int i = 0; i < x - 1; i++)
	{
		SumDay += cntlist[i];
	}

	// 총일수 합 + y 일수를 7로 나누면 나머지가 해당 요일이 된다.
	SumDay = (SumDay + y) % 7;
	cout << Day[SumDay] << endl;

	return 0;
}