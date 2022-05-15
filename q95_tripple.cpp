#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0,k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
             if (a[i]==a[i+1]&&a[i]==a[i+2]&&a[i+1]==a[i+2])
             {
                 count = a[i];
                 break;
             }
             else
             {
                 count = -1;
             }
             
        }
        cout << count << endl;
    }

    return 0;
}