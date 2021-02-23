/**
 ** Coded by: "António 3A"
 ** UVa: 10465 - Homer Simpson
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;

int main()
{
    fIO; in; out;
    int m, n, t, a, b, x, y;
    while(cin >> m >> n >> t)
    {
        y = 0, b = 1E4;
        ccl(i, 0, t/m)
        {
            a = t - m * i;
            x = a / n;
            a -= n*x;
            x += i;
            if(!a)
            {
                if(b) y = x;
                y = max(y, x);
                b = 0;
            }
            else if(b)
                if(b > a)
                {
                    b = a;
                    y = x;
                }
                else if(b == a)
                    y = max(y, x);
        }
        cout << y;
        if(b)
            cout << " " << b;
        cout << "\n";
    }
    return 0;
}
