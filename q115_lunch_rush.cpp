#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k,sum=0,p=-1000000000;
    cin >> n >> k;
    int f[n], t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i] >> t[i];
        if (t[i]>=k)
        {
            sum = f[i] - (t[i] - k);
        }
        else
        {
            sum = f[i];
        }
        if (sum>p)
        {
            p = sum;
        }
        
    }
    cout << p << endl;
    return 0;
}