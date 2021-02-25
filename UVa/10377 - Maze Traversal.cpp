/**
 ** Coded by: "António 3A"
 ** UVa: 10377 - Maze Traversal
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define mms(a, v) memset(a, v, sizeof a)
#define str(n) to_string(n)
#define f first
#define s second

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
    char O[4] = {'N', 'E', 'S', 'W'}, m;
    int t, o;
    cin >> t;
    while(t--)
    {
        int l, c;
        pair<int, int> xy;
        cin >> l >> c;
        string M[l+1], st;
        o = 0;
        ccl(i, 0, l)
            {
                M[i] = " ";
                getline(cin, st);
                M[i] += st;
            }

        cin >> xy.f >> xy.s;
        while(cin >> m and m != 'Q')
        {
            if(m != 'R' && m != 'L' && m != 'F')
                continue;
            else 
                if(m == 'F')
                {
                    pair<int, int> p = mv(xy.f, xy.s, o);
                    if(p.f < 1 || p.f > l || p.s < 1 || p.s > c)
                        continue;
                    if(M[p.f][p.s] != '*')
                        xy = p;
                }
                else
                {
                    o += m == 'R' ? +1 : -1;
                    o += 4, o %= 4;
                }
        }
        cout << xy.f << " " << xy.s << " " << O[o] << "\n" << (t ? "\n" : "");
    }
    return 0;
}
