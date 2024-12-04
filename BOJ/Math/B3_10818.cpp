#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int minval, maxval;
    minval = 1000001;
    maxval = -1000001;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < minval)
        {
            minval = x;
        }
        if (x > maxval)
        {
            maxval = x;
        }
    }
    cout << minval << " " << maxval;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int minval, maxval;
    minval = 1000001;
    maxval = -1000001;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < minval)
        {
            minval = x;
        }
        if (x > maxval)
        {
            maxval = x;
        }
    }
    cout << minval << " " << maxval;

    return 0;
}
