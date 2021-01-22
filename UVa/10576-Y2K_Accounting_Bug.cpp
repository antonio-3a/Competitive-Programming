/**
 ** Coded by: "António 3A"
 ** UVa: 10576 - Y2K Accounting Bug
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)

using namespace std;
typedef long long ll;

ll s, d, M[13], m;

void solve(int x)
{
    if(x > 4)
    {
        if(M[x]-M[x-5] >= 0)
            return;
    }
    if(x == 12)
    {
        m = max(m, M[x]);
        return;
    }
    M[x+1] = M[x];

    M[x+1] += s;
    solve(x+1);
    M[x+1] -= s;

    M[x+1] -= d;
    solve(x+1);
    M[x+1] += d;
}

int main()
{
    fIO;
    freopen("input.in", "r", stdin);

    M[0] = 0;
    while(cin>>s>>d)
    {
        m = LLONG_MIN;
        solve(0);
        cout<<(m > 9 ? to_string(m) : "Deficit")<<"\n";
    }
    return 0;
}
