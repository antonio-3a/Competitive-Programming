/**
 ** Coded by: "António 3A"
 ** UVa: 11831 - Sticker Collector Robot
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define mms(a, v) memset(a, v, sizeof a)
#define str(n) to_string(n)
#define pf first
#define ps second
using namespace std;
typedef long long llong;

pair<int, int> mv(int x, int y, int o)
{
    if(o == 0) x--;
    if(o == 2) x++;
    if(o == 1) y++;
    if(o == 3) y--;
    pair<int, int> p(x, y);
    return p;
}

int main()
{
    fIO;
    in; //out;
    int X, Y, z;
    char D[4] = {'N', 'L', 'S', 'O'};
    while(cin >> X >> Y >> z and X)
    {
        int x, y, o, s;
        char R[X--][Y--], r;
        ccl(i, 0, X)
            ccl(j, 0, Y)
            {
                cin >> r;
                R[i][j] = r;
                s = r == 'N' ? 0 : r == 'L' ? 1 : r == 'S' ? 2 : r == 'O' ? 3 : 4;
                if(s < 4)
                {
                    o = s;
                    R[i][j] = '.';
                    x = i, y = j;
                }
            }
        s = 0;
        while(z--)
        {
            cin >> r;
            if(r != 'F')
            {
                o += r == 'D' ? +1 : -1;
                o += 4, o %= 4;
            }
            else
            {
                auto p = mv(x, y, o);
                if(p.pf < 0 || p.pf > X || p.ps < 0 || p.ps > Y)
                    continue;
                if(R[p.pf][p.ps] == '#')
                    continue;
                x = p.pf, y = p.ps;
                s += R[x][y] == '*' ? +1 : 0;
                R[x][y] = '.';
            }
        }
        cout << s << "\n";
    }
    return 0;
}
