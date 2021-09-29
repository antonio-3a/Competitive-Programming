/**
 ** Coded by: "António 3A"
 ** UVa: 11559 - Event Planning
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
    //fIO
    in
    //out
    
    int n, b, h, w, p, mn, r;
    while(cin >> n >> b >> h >> w)
    {
        mn = b+1;
        while (h--)
        {
            cin >> p;
            ccl(i, 1, w)
            {
                cin >> r;
                if(r >= n)
                    mn = min(mn, n*p);
            }
        }
        if(mn > b)
            cout << "stay home\n";
        else
            cout << mn << "\n";
    }
    return 0;
}
