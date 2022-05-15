#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int a1 = a + b + c;
    int a2 = (a + b) * c;
    int a3 = a * (b + c);
    int a4 = a * b * c;
    cout << (max(max(a1, a2), max(a3, a4)));
    return 0;
}