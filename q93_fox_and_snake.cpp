#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 1||i%4==3)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else if(i%4==2)
        {
            for (int k = 1; k <= m; k++)
            {
                if (k == m)
                {
                    cout << "#";
                }
                else
                    cout << ".";
            }
            cout << endl;
        }
        else if(i%4==0)
        {
            for (int k = 1; k <= m; k++)
            {
                if (k == 1)
                {
                    cout << "#";
                }
                else
                    cout << ".";
            }
            cout << endl;
        }
    }

    return 0;
}