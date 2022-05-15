#include <bits/stdc++.h>
using namespace std ;
int main()
{
ios_base::sync_with_stdio(false);
int t ;
cin >> t;
while(t) {

    string str ;
    cin >> str ;
    int a = 1 ,yes = 1;
    for ( int  i = 1; i < str.size() ; i++)
    {
        if(str[i] == str[i-1]){
            a ++ ;
        }
        else{
            if ( a >1 ){
                a = 1 ; 
                continue;
            }
            else{cout << "NO"; yes = 0 ; break;}
        }
    }          
    if ( str.size() <= 1 ||(str[str.size() -1 ] != str[str.size() -2 ]) && yes == 1)
    {
        cout << "NO";
    }    
    else if(yes == 1){
        cout << "YES";
    }      
    t--; cout <<endl;
}
 return 0;
}