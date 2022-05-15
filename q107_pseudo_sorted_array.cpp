#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i - 1] > a[i] && i > 0)
            {
                swap(a[i - 1], a[i]);
                if (a[i - 2] > a[i - 1] && i > 1)
                {
                    count += 2;
                }
                else
                {
                    count += 1;
                }
            }
            else
            {
                ;
            }
        }
        if (count < 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        t--;
    }

    return 0;
}