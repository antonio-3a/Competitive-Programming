/**
 ** Coded by: "António 3A"
 ** UVa: 10130 - SuperSale
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;

int main()
{
    fIO; in; //out;
    
    int t, n = 31, N[2][n], p, w, a, b;
    cin>>t;
    while(t--)
    {
        cin >> n;
        a = 0, b = 1;
        memset(N[a], 0, sizeof N[a]);
        ccl(x, 1, n)
        {
            cin >> p >> w;
            ccl(i, 0, 30)
            {
                N[b][i] = N[a][i];
                if(i >= w)
                    N[b][i] = max(N[b][i], N[a][i-w]+p);
            }
            swap(a, b);
        }
        cin>>n;
        p = 0;
        while (n--)
        {
            cin >> w;
            p += N[a][w];
        }
        cout << p <<"\n";
        
    }
    return 0;
}
