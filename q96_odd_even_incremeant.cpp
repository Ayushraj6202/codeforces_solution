#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0,count1=0,b=0,c=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i=i+2)
        {
             if (a[i]%2==0)
             {
                 count++;
             }
            else if (a[i]%2!=0)
             {
                 count1++;
             }
             
        }
        for (int i = 1; i < n; i=i+2)
        {
             if (a[i]%2==0)
             {
                 b++;
             }
             else if (a[i]%2!=0)
             {
                 c++;
             }
             
        }
        if ((count==(n+1)/2||count1==(n+1)/2)&&(b==n/2||c==n/2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}