/**
 ** Coded by: "António 3A"
 ** UVa: 10074 - Take the Land
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

    int a = 101, m, s, N[a][a], b, p;
    memset(N, 0 ,sizeof N);
    while(cin>>a>>b and a and b)
    {

        m = 0;
        ccl(i, 1, a)
            ccl(j, 1, b)
                cin>>N[i][j], N[i][j] += N[i-1][j]+N[i][j-1]-N[i-1][j-1];
        
        ccl(i, 1, a)
            ccl(j, 1, b)
                ccl(x, i, a)
                    ccl(y, j, b)
                    {
                        s = N[x][y]-N[i-1][y]-N[x][j-1]+N[i-1][j-1];
                        p = (x-i+1)*(y-j+1);
                        if(!s)
                            m = max(m, p);
                    }
        cout<<m<<"\n";
    }
    return 0;
}
