#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count1=0,count0=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]==1)
            {
                count1++;
            }
            else
            {
                count0++;
            }
            
        }
        if (count0>count1)
        {
            cout << "0\n";
        }
        else
        {
            cout << "1\n";
        }
    }  

    return 0;
}