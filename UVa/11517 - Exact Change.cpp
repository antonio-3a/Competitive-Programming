/**
 ** Coded by: "António 3A"
 ** UVa: 11517 - Exact Change
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
    
    int t, m = 1E4, N[m+1], c, n, x;
    N[0] = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        ccl(i, 1, m) N[i] = 1E6;
        ccl(i, 1, c)
        {
            cin>>x;
            for(int j = m; j >= x; j--)
                N[j] = min(N[j], N[j-x]+1);
        }
        ccl(i, n, m)
            if(N[i] <= c) 
            {
                cout<<i<<" "<<N[i]<<"\n";
                break;
            }
    }
    return 0;
}
