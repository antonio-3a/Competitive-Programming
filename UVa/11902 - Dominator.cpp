/**
 ** Coded by: "António 3A"
 ** UVa: 11902 - Dominator
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

int n;
bool N[100][100], V[100], V0[100];

void dfs(int x, int p)
{
    if(V[x] || x == p)
        return;
    V[x] = 1;
    ccl(i, 0, n)
        if(N[x][i])
            dfs(i, p);
}

int main()
{
    fIO;
    in; out;
    int t;
    string s;
    cin >> t;
    ccl(i, 1, t)
    {
        cin >> n;
        n--;
        ccl(j, 0, n)
            ccl(k, 0, n)
                cin >> N[j][k];
        s = "+";
        ccl(j, 0, 2*n)
            s += "-";
        s += "+\n";
        cout << "Case " << i << ":\n" << s;
        mms(V, 0);
        dfs(0, n+1);
        ccl(j, 0, n)
            V0[j] = V[j];
        ccl(j, 0, n)
        {
            cout << "|";
            mms(V, 0);
            dfs(0, j);
            ccl(k, 0, n)
                cout << (!V0[k] || V[k] ? 'N' : 'Y') << '|';
            cout << '\n' << s;
        }
    }
    return 0;
}
