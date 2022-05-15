#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], cm = 0, dp = 0;
        for (int i = 0; i < n; i++) // 2 -1 yes 3 -1 no  3 1 no  2 1 yes  1 1 1 -1 -1     1 -1 1 -1 1
        {
            cin >> a[i];
            if (a[i] == -1)
            {
                cm++;
            }
            else if (a[i] == 1)
            {
                dp++;
            }
        }
        int p = abs(dp - cm);
        if (n == 3)
        {
            if (dp == 3 || cm == 3)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else if (p < 2)
        {
            cout << "YES\n";
        }
        else if (p == 2)
        {
            if (cm % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}