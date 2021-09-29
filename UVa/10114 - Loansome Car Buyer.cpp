/**
 ** Coded by: "António 3A"
 ** UVa: 10114 - Loansome Car Buyer
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

    int M, D, m;
    double p, a, c, d, e;
    while(cin >> M >> p >> a >> D and M >= 0)
    {
        double MD[M+1];
        mms(MD, 0);
        ccl(i, 1, D)
        {
            cin >> m >> d;
            MD[m] = d;
        }
        c = a + p;
        c -= c*MD[0];
        m = 0;
        d = MD[0];
        e = a / M;
        while(a >= c)
        {
            m++;
            a -= e;
            d = MD[m] ? MD[m] : d;
            c -= c*d;
        }
        cout << m << " month" << (m == 1 ? "\n" : "s\n");
    }
    return 0;
}
