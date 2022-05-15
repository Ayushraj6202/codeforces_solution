#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll int l, r, count = 0;
    cin >> l >> r;
    if (abs(l - r) < 2)
    {
        cout << "-1\n";
    }
    else
    {
        ll int a = l, b = l + 1, c = l + 2;
        if (l % 2 != 0)
        {
            l += 1;
        }
        if (r - l < 2)
        {
            cout << "-1" << endl;
        }
        else
        {
            a = l;
            b = l + 1;
            c = l + 1 + 1;
            cout << a << " " << b << " " << c << endl;
        }
    }

    //  count = __gcd(a, b);
    // if (count ==1)
    // {
    //     cout << "co-primes\n";
    // }
    // else
    // {
    //     cout << "non co-primes\n";
    // }
    // cout << "LCM is " << (a * b) / __gcd(a, b);
    return 0;
}