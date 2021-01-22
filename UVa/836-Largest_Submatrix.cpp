/**
 ** Coded by: "António 3A"
 ** UVa: 836 - Largest Submatrix
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

    int t, l = 26, m, o, p, N[l][l];
    string s;
    memset(N, 0, sizeof N);
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.size();
        ccl(j, 0, l-1)
            N[1][j+1] = (s[j]-'0')+N[0][j+1]+N[1][j]-N[0][j];
        ccl(i, 2, l) 
        {
            cin>>s;
            ccl(j, 0, l-1)
                N[i][j+1] = (s[j]-'0')+ N[i-1][j+1]+N[i][j]-N[i-1][j];
        }
        m = 0;
        ccl(i, 1, l)
            ccl(j, 1, l)
                ccl(x, i, l)
                    ccl(y, j, l)
                    {
                        o = N[x][y]-N[i-1][y]-N[x][j-1]+N[i-1][j-1];
                        p = (x-i+1)*(y-j+1);
                        if(o == p)
                            m = max(m, p);
                    }
        cout<<m<<"\n"<<(t ? "\n" : "");
    }
    return 0;
}
