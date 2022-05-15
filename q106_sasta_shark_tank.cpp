#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = 10 * a;
        int y = 5 * b;
        if (x > y)
        {
            cout << "FIRST\n";
        }
        else if (x < y)
        {
            cout << "SECOND\n";
        }
        else
        {
            cout << "ANY\n";
        }
    }

    return 0;
}