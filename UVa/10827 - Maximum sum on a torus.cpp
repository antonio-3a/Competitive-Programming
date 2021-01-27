/**
 ** Coded by: "António 3A"
 ** UVa: 10827 - Maximum sum on a torus
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
    int n = 76, N[2*n][2*n], m, t;
    memset(N, 0, sizeof N);
    cin>>t;
    while(t--)
    {
        cin>>n, m = INT_MIN;
        ccl(i, 1, n)
        {
            ccl(j, 1, n)
                cin>>N[i][j], N[i+n][j+n] = N[i+n][j] =  N[i][j+n] = N[i][j], N[i][j] += N[i-1][j]+N[i][j-1]-N[i-1][j-1];
            ccl(j, n+1, n+n)
                N[i][j] += N[i-1][j]+N[i][j-1]-N[i-1][j-1];
        }
        ccl(i, n+1, n+n)
            ccl(j, 1, n+n)
                N[i][j] += N[i-1][j]+N[i][j-1]-N[i-1][j-1];
        ccl(a, 1, n)
            ccl(b, 1, n)
                ccl(i, a, n+a-1)
                    ccl(j, b, n+b-1)
                        m = max(m, N[i][j]-N[a-1][j]-N[i][b-1]+N[a-1][b-1]);
        cout<<m<<"\n";
    }
    return 0;
}