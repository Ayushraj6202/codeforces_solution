#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int k[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        k[a[i]-1] = i+1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << k[i] << " ";
    }
    
    return 0;
}