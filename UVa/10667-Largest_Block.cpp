/**
 ** Coded by: "António 3A"
 ** UVa: 10667 - Largest Block
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

    int t, n = 101, m, s, N[n][n], b, u, v, u1, v1, p;
    cin>>t;
    while(t--)
    {
        cin>>n>>b, m = 0;
        ccl(i, 1, n)
            ccl(j, 1, n)
                N[i][j] = 1;
        while(b--)
        {
            cin>>u>>v>>u1>>v1;
            ccl(i, u, u1)
                ccl(j, v, v1)
                    N[i][j] = 0;
        }
        ccl(i, 0, n)
            N[i][0] = N[0][i] = 0;
        
        ccl(i, 1, n)
            ccl(j, 1, n)
                N[i][j] += N[i-1][j]+N[i][j-1]-N[i-1][j-1];
        
        ccl(i, 1, n)
            ccl(j, 1, n)
                ccl(x, i, n)
                    ccl(y, j, n)
                    {
                        s = N[x][y]-N[i-1][y]-N[x][j-1]+N[i-1][j-1];
                        p = (x-i+1)*(y-j+1);
                        if(p == s)
                            m = max(m, s);
                    }
        cout<<m<<"\n";
    }
    return 0;
}
