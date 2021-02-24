/**
 ** Coded by: "António 3A"
 ** UVa: 11906 - Knight in a War Grid
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define mms(a, v) memset(a, v, sizeof a)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;

int main()
{
    fIO;
    in; //out;
    
    int t;
    cin >> t;
    int R[4] = {-1, -1, +1, +1};
    int C[4] = {+1, -1, +1, -1};
    ccl(h, 1, t)
    {
        int r, c, m, n, x, y, w;
        cin >> r >> c >> m >> n >> w;
        int RC[r][c];
        mms(RC, 0);
        int Z[2] = {0, 0};
        while(w--)
        {
            cin >> x >> y;
            RC[x][y] = -1;
        }
        RC[0][0] = 1;
        queue<pair<int, int>> Q;
        Q.push({0, 0});
        while (!Q.empty())
        {
            x = Q.front().first;
            y = Q.front().second;
            Q.pop();
            w = 2;
            set<pair<int, int>> S;
            while(w--)
            {
                ccl(i, 0, 3)
                {
                    int a = x+R[i]*m, b = y+C[i]*n;
                    if(a < 0 || a >= r)
                        continue;
                    if(b < 0 || b >= c)
                        continue;
                    if(RC[a][b] == -1)
                        continue;
                    S.insert({a, b});
                    if(RC[a][b])
                        continue;
                    Q.push({a, b});
                    RC[a][b] = 1;
                }
                swap(m, n);
            }
            Z[S.size()&1] ++;
        }
        cout << "Case " << h << ": " << Z[0] << " " << Z[1] << "\n";
    }
    return 0;
}
