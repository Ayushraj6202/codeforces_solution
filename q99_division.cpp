#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a>=1900)
        {
            cout << "Division 1\n";
        }
       else if (a<1900&&a>=1600)
        {
            cout << "Division 2\n";
        }
        else if (a<1600&&a>=1400)
        {
            cout << "Division 3\n";
        }
        else if (a<=1399)
        {
            cout << "Division 4\n";
        }
        
    }
    
    return 0;
}