#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        if (n == 1)
        {
            int temp;
            cin >> temp;
            cout << "YES\n";
        }
        else
        {
            int a, b;
            for (int i = 0; i < n; i++)
            {
                int temp;
                cin >> temp;
                if (i == 0)
                {
                    a = temp;
                }
                else if (i == n - 1)
                {
                    b = temp;
                }
            }
            if (b - a - n < 2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}