#include <iostream>

using namespace std;

// 1 <= x <= 12 && 1 <= y <= 31
// 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.
// 1�� 1�� ������

int main()
{
	string Day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int cntlist[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int x, y;
	x = 0;
	y = 0;
	cin >> x >> y;

	// x���� ���������� ���ϼ���.
	int SumDay = 0;
	for (int i = 0; i < x - 1; i++)
	{
		SumDay += cntlist[i];
	}

	// ���ϼ� �� + y �ϼ��� 7�� ������ �������� �ش� ������ �ȴ�.
	SumDay = (SumDay + y) % 7;
	cout << Day[SumDay] << endl;

	return 0;
}