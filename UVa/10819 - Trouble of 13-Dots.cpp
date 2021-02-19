/**
 ** Coded by: "António 3A"
 ** UVa: 10819 - Trouble of 13-Dots
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
    fIO; in; out;
    
    int m, n;
    while(cin >> m >> n)
    {
        int M[2][m+201], p, f, a = 0, b = 1, mx = 0;
        memset(M, -1, sizeof M);
        M[0][0] = 0;
        while(n--)
        {
            cin >> p >> f;
            ccl(i, 0, m+200)
            {
                if(M[a][i] == -1)
                    continue;
                M[b][i] = max(M[b][i], M[a][i]);
                if(i+p <= m)
                {
                    M[b][i+p] = max(M[b][i+p], M[a][i]+f);
                    mx = max(mx, M[b][i+p]);
                }
                if(i+p > m && i+p <= m+200)
                {
                    M[b][i+p] = max(M[b][i+p], M[a][i]+f);
                    if(i+p > 2000)
                        mx = max(mx, M[b][i+p]);
                }
            }
            swap(a, b);
        }
        cout << mx << "\n";
    }
    return 0;
}
