#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t)
    {

        string str;
        cin >> str;
        if (str.size() < 2)
        {
            cout << "NO";
        }
        else
        {
            int a = 0, b = 0,co=0;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == 'A')
                {
                    a++;
                }
                else
                {
                    b++;
                }
                if (str[i]=='B'&&str[i+1]=='B')
                {
                    co++;
                }
                
            }
            if (b > a ||co>=1)
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
            }
        }

        t--;
        cout << endl;
    }
    return 0;
}