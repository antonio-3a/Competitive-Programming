/**
 ** Coded by: "António 3A"
 ** UVa: 11752 - The Super Powers
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i < e; i ++)
#define mms(a, v) memset(a, v, sizeof a)
#define mx (int) 5E4+1
using namespace std;
typedef unsigned long long ull;

ull fp(ull b, int e)
{
    if(!e) return 1;
    return (e & 1 ? b : 1) * fp(b * b, e >> 1);
}

int main()
{
    fIO
    in out
    ull max = 18446744073709551615ULL;
    set<ull> S;
    S.insert(1);
    ccl(i, 2ULL, 1 << 16)
    {
        int l = log(max)/log(i);
        ccl(j, 2, l+1)
        {
            int m = l/j;
            ccl(k, 2, m+1)
            {
                ull s = fp(i, j*k);
                S.insert(s);
            }
        }
    }
    S.erase(0);
    for(ull s : S)
        cout << s << "\n";
    return 0;
}
