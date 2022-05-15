#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int n;
    char c[305][305];
    while (cin >> n && n != EOF)
    {
        int flag = 0;
        char s1, s2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> c[i][j];
                if (i == 0 && j == 0)
                    s1 = c[i][j];
                else if (i == 0 && j == 1)
                    s2 = c[i][j];
                if ((i == j || i == n - 1 - j) && c[i][j] != s1)
                    flag = 1;
                else if (!(i == j || i == n - 1 - j) && c[i][j] != s2)
                    flag = 1;
            }
        }
        if (s1 == s2)
            flag = 1;
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
