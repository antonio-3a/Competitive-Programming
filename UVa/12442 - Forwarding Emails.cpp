/**
 ** Coded by: "António 3A"
 ** UVa: 12442 - Forwarding Emails
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i < e; i++)
#define mms(a, v) memset(a, v, sizeof a)
#define mx (int) 5E4+1
using namespace std;
typedef long long llong;

vector<int> N[mx];
bool V[mx], W[mx];
int m;

void solve(int x)
{
    if(W[x]) return;
    m++;
    W[x] = 1;
    for(int y : N[x])
        solve(y);
    W[x] = 0;
    V[x] = 1;
}

int main()
{
    fIO
    in out
    
    int t, n;
    cin >> t;
    ccl(c, 1, t+1)
    {
        cin >> n;
        int a, b;
        ccl(i, 1, n+1)
            N[i].clear();
        ccl(i, 1, n+1)
        {
            V[i] = W[i] = 0;
            cin >> a >> b;
            N[a].push_back(b);
        }
        a = b = 0;
        ccl(i, 1, n+1)
        {
            m = 0;
            if(!V[i])
                solve(i);
            if(m > b)
            {
                b = m;
                a = i;
            }
        }
        cout << "Case " << c << ": " << a << "\n";
    }
    return 0;
}
