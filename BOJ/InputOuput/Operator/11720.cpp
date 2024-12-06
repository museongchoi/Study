#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        total += ch - 48;

    }
    cout << total << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string line;
    cin >> t;
    cin >> line;
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += line[i] - '0';
    }
    cout << sum;
    return 0;
}