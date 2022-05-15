#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int t = ((n / m) * b);
    int p = min(((n - (n / m) * m) * a), (n - (n / m) * m) * b);

    if(m*a<=b)
    cout<<n*a<<endl;
    else
    cout<<(n/m)*b+min((n%m)*a,b)<<endl;

    return 0;
}