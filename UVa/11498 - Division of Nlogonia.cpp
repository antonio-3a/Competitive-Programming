/**
 ** Coded by: "António 3A"
 ** UVa: 11498 - Division of Nlogonia
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, begin, end) for(auto i = begin; i <= end; i ++)
#define mms(array, value) memset(array, value, sizeof array)
#define mx (int) 5E4+1
using namespace std;
typedef long long ll;

int main()
{
    fIO
    in
    //out
    
    int t;
    while(1)
    {
        cin >> t;
        if(!t) break;
        int a, b, x, y;
        cin >> a >> b;
        while(t--)
        {
            cin >> x >> y;
            x -= a, y -= b;
            if(!x || !y)
                cout << "divisa";
            else if(x < 0)
                cout << (y > 0 ? "NO" : "SO");
            else
                cout << (y > 0 ? "NE" : "SE");
            cout << "\n";
        }
    }
    
    return 0;
}
