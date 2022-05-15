#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int ram;
            cin >> ram;
            sum += ram - 1;
        }
        if (sum % 2 == 0)
        {
            cout << "maomao90";
        }
        else
        {
            cout << "errorgorn";
        }
        cout << endl;
    }
    return 0;
}