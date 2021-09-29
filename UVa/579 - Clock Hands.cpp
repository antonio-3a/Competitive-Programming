/**
 ** Coded by: "António 3A"
 ** UVa: 579 - Clock Hands
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
    float h, m, s;
    while (scanf("%f:%f", &h, &m))
    {
        if(!h && !m)
            break;
        h = h * 30 + 0.5*m;
        m *= 6;
        s = abs(h - m);
        printf("%.3f\n", min(360 - s, s));
    }
    
    return 0;
}
