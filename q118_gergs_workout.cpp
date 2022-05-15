#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i = i + 3)
    {
        sum1 += a[i];
    }
    for (int i = 1; i < n; i = i + 3)
    {
        sum2 += a[i];
    }
    for (int i = 2; i < n; i = i + 3)
    {
        sum3 += a[i];
    }

    int max_sum = max(sum1, max(sum2, sum3));
    if (max_sum == sum1)
    {
        cout << "chest" << endl;
    }
    else if (max_sum == sum2)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }

    return 0;
}