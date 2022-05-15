#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int arr[250];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for (int i = p; i < p+q; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    sort(arr, arr + p + q);
    for (int i = 0; i < p + q; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }

    if (n == count)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}