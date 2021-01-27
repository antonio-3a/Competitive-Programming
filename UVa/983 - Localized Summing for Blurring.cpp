/**
 ** Coded by: "António 3A"
 ** UVa: 983 - Localized Summing for Blurring
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)
 
using namespace std;
typedef long long ll;
int N[1001][1001];

int main()
{
    fIO;
    freopen("input.in", "r", stdin);
    int n, m, s, x, t = 0;
    memset(N, 0, sizeof N);
    while(cin>>n>>m)
    {
        cout<<(t ? "\n" : "");
        s = 0;
        ccl(i, 1, n)
            ccl(j, 1, n)
                cin>>N[i][j], N[i][j] += N[i-1][j]+N[i][j-1]-N[i-1][j-1];
        
        ccl(i, 0, n-m)
            ccl(j, 0, n-m)
            {
                x = N[m+i][m+j]-N[i][m+j]-N[m+i][j]+N[i][j];
                cout<<x<<"\n";
                s += x;
            }
        cout<<s<<"\n";
        t++;
    }
    return 0;
}
