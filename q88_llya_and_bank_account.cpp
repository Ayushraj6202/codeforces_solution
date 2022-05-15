#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n == 3)
    {
        if ((s[0] == '-' && s[1] == '1' && s[2] == '0') || (s[0] == '-' && s[1] == '2' && s[2] == '0') || (s[0] == '-' && s[1] == '3' && s[2] == '0') || (s[0] == '-' && s[1] == '4' && s[2] == '0') || (s[0] == '-' && s[1] == '5' && s[2] == '0') || (s[0] == '-' && s[1] == '6' && s[2] == '0') || (s[0] == '-' && s[1] == '7' && s[2] == '0') || (s[0] == '-' && s[1] == '8' && s[2] == '0') || (s[0] == '-' && s[1] == '9' && s[2] == '0'))
        {
            cout << "0";
        }
        else
        {
            if (s[n - 2] >= s[n - 1])
            {
                for (int i = 0; i < n - 2; i++)
                {
                    cout << s[i];
                }

                cout << s[n - 1];
            }
            if (s[n - 2] < s[n - 1])
            {
                for (int i = 0; i < n - 1; i++)
                {
                    cout << s[i];
                }
            }
        }
    }

    else if (s[0] == '-')
    {
        if (s[n - 2] >= s[n - 1])
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << s[i];
            }

            cout << s[n - 1];
        }
        if (s[n - 2] < s[n - 1])
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << s[i];
            }
        }
    }
    else
    {
        cout << s;
    }

    return 0;
}