/**
 ** Coded by: "António 3A"
 ** UVa: 118 - Mutant Flatworld Explorers
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
    if(o == 0) y++;
    if(o == 2) y--;
    if(o == 1) x++;
    if(o == 3) x--;
    pair<int, int> p(x, y);
    return p;
}

int main()
{
    fIO;
    in; //out;
    int X, Y, x, y, o;
    char D[4] = {'N', 'E', 'S', 'W'}, d;
    string ins;
    cin >> X >> Y;
    bool R[Y+1][X+1], l;
    mms(R, 1);
    while(cin >> x >> y >> d)
    {
        l = 0;
        o = d == 'N' ? 0 : d == 'E' ? 1 : d == 'S' ? 2 : 3;
        cin >> ins;
        for(char i : ins)
            if(i != 'F')
            {
                o += i == 'R' ? +1 : -1;
                o += 4, o %= 4;
            }
            else
                {
                    auto p = mv(x, y, o);
                    if(p.pf < 0 || p.pf > X || p.ps < 0 || p.ps > Y)
                    {
                        if(R[y][x])
                        {
                            l = 1;
                            R[y][x] = 0;
                            break;
                        }
                        continue;
                    }
                    x = p.pf;
                    y = p.ps;
                }
        cout << x << " " << y << " " << D[o] << (l ? " LOST\n" : "\n");
    }
    return 0;
}
