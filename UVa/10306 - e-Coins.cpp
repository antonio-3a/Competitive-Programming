/**
 ** Coded by: "António 3A"
 ** UVa: 10306 - e-Coins
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)
 
using namespace std;
typedef long long ll;

int main()
{
    fIO;
    freopen("input.in", "r", stdin);
    
    int m, s, a, b, n = 301, N[n][n];
    cin>>n;
    while(n--)
    {
        cin>>m>>s;
        ccl(i, 0, s)
            ccl(j, 0, s)
                N[i][j] = 1E9;
        N[0][0] = 0;
        while(m--)
        {
            cin>>a>>b;
            ccl(i, a, s)
                ccl(j, b, s)
                    N[i][j] = min(N[i][j], N[i-a][j-b]+1);
            
        }
        m = 1E9;
        ccl(i, 0, s)
            ccl(j, 0, s)
                if(i*i+j*j == s*s)
                    m = min(m, N[i][j]);
        if(m == 1E9)
            cout<<"not possible\n";
        else
            cout<<m<<'\n';
    }
    return 0;
}
