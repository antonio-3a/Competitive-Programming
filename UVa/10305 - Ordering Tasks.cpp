/**
 ** Coded by: "António 3A"
 ** UVa: 10305 - Ordering Tasks
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define mms(a, v) memset(a, v, sizeof a)
#define mx (int) 1E1+1
using namespace std;
typedef long long llong;

vector<int> G[mx];
stack<int> T;
bool V[mx];

void dfs(int x)
{
    if(V[x]) return;
    V[x] = 1;
    for(int y : G[x]) dfs(y);
    T.push(x);
}
int main()
{
    fIO
    in out
    
    int n, m, a, b;
    while(cin >> n >> m and n)
    {
        ccl(i, 0, n)
            G[i].clear();
        while(m--)
        {
            cin >> a >> b;
            G[a].push_back(b);
        }
        mms(V, 0);
        ccl(i, 1, n)
            if(!V[i])
                dfs(i);
        while(!T.empty())
        {
            cout << T.top();
            T.pop();
            cout << (T.empty() ? "\n" : " ");
        }
    }
    return 0;
}
