#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d,c,m=0;
    cin >> n >> c;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i]; 
    }
    for (int i = 0; i < n-1; i++)
    {
        d = x[i] - x[i + 1] - c;
        if (d>m)
        {
            m = d;
        }
        
    }
    cout << m << endl;
    return 0;
}