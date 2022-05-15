#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, sum = 0;
    cin >> n >> d;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        sum += t[i];
    }
    int T = 10 * (n - 1) + sum;
    if (d < T)
    {
        cout << "-1\n";
    }
    else
    {
        cout << 2 * (n - 1) + (d - T) / 5;
    }

    return 0;
}