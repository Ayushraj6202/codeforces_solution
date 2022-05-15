#include <bits/stdc++.h>
using namespace std;
void ramji(float a, float b, float c, float q)
{
    float x1, x2, y1, y2;
    float d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    if ((x1 - x2) == 0 || (y1 - y2) == 0 || (y1 - y2) / (x1 - x2) == 1 || (y1 - y2) / (x1 - x2) == -1)
    {
        if ((x1 - x2) == 0)
        {
            cout << x1 + d << " " << y1 << " " << x1 + d << " " << y2;
        }
        else if ((y1 - y2) == 0)
        {
            cout << x2 << " " << y2 + d << " " << x1 << " " << y2 + d;
        }
        else
        {
            cout << x1 << " " << y2 << " " << x2 << " " << y1;
        }
    }
    else
    {
        cout << "-1\n";
    }
}
int main()
{
    float x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ramji(x1, y1, x2, y2);
    return 0;
}