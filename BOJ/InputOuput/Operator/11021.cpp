#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

	ios_base::sync_with_stdio(false);	// �� ǥ�� ����� ����ȭ ����
	cin.tie(NULL);	// �Է°� ����� �����ִ� ���� Ǯ���ش�.

	int T, a, b;
	cin >> T; // �׽�Ʈ ���̽�

	for (int i = 1; i <= T; i++) {
		cin >> a >> b;

		cout << "Case #" << i << ": " << a + b << "\n";
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	int T, A, B;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i << ": " << A + B << endl;
	}

	return 0;
}