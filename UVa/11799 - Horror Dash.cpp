/**
 ** Coded by: "António 3A"
 ** UVa: 11799 - Horror Dash
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
    
    int t, n, c, m;
    cin >> t;
    ccl(i, 1, t)
    {
        m = 0;
        cin >> n;
        while(n--)
        {
            cin >> c;
            m = max(m, c);
        }
        cout << "Case " << i << ": " << m << "\n";
    }
    return 0;
}
