#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, count1 = 0, a1 = 0, b1 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            count = i+1;
            a1++;
        }
        else if (a[i] % 2 != 0)
        {
            count1 = i+1;
            b1++;
        }
    }
    if (a1 == 1)
    {
        cout << count << endl;
    }
    else if (b1 == 1)
    {
        cout << count1;
    }

    return 0;
}