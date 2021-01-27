/**
 ** Coded by: "António 3A"
 ** UVa: 11951 - Area
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)

using namespace std;
typedef long long ll;

int main()
{
    fIO;
    freopen("input.in", "r", stdin);

    ll t, a = 101, m, s, N[a][a], b, p, u, v;
    memset(N, 0, sizeof N);
    cin>>t;
    ccl(c, 1, t)
    {
        cin>>a>>b>>p;
        m = 0, v = 0;
        ccl(i, 1, a)
            ccl(j, 1, b)
                cin>>N[i][j], N[i][j] += N[i-1][j]+N[i][j-1]-N[i-1][j-1];
        
        ccl(i, 1, a)
            ccl(j, 1, b)
                ccl(x, i, a)
                    ccl(y, j, b)
                    {
                        s = N[x][y]-N[i-1][y]-N[x][j-1]+N[i-1][j-1];
                        if(s > p)
                            continue;
                        u = (x-i+1)*(y-j+1);
                        if(u > m)
                            m = u, v = s;
                        else if(u == m)
                            v = min(v, s);
                    }
        cout<<"Case #"<<c<<": "<<m<<" "<<v<<"\n";
    }
    return 0;
}
