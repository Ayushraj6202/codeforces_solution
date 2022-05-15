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
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = -1, d = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                c = i;
                break;
            }
        }
        for (int i = n - 1; i > -1; i--)
        {
            if (a[i] == a[i - 1])
            {
                d = i;
                break;
            }
        }
        if (c == -1)
        {
            cout << "0";
        }
        else
        {
            if (d - c - 2 > 0)
            {
                cout << d - c - 2;
            }
            else if (d - c == 2)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}