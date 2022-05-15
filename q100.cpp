#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector<long long int> a;
        for (long long int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;
            a.push_back(temp);
        }
        long long int result = 0;
        sort(a.begin(), a.end());
        while (x>=a[0])
        {
            long long int q = x;
            for (int i = 0; i < n; i++)
            {
                if (a[i] <= q)
                {
                    q -= a[i];
                    a[i]++;
                    result++;
                }
                else
                {
                    a[i]++;
                }
            }
        }
        cout << result<<endl;
    }

    return 0;
}