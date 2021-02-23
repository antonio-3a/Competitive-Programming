/**
 ** Coded by: "António 3A"
 ** UVa: 11396 - Claw Decomposition
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;
int C[301];
bool bl;
vector<int> G[301];

void dfs(int a, int b)
{
    if(C[b])
    {
        if(C[b] == C[a]) bl = 0;
        return;
    }
    C[b] = -C[a];
    for(int c : G[b]) dfs(b, c);
}

int main()
{
    fIO; in; //out;
    
    int n, a, b;
    while(cin >> n and n)
    {
        bl = 1;
        ccl(i, 0, n)
        {
            C[i] = 0;
            G[i].clear();
        }
        while(cin >> a >> b and a and b)
        {
            G[a].push_back(b);
            G[b].push_back(a);
        }
        C[0] = 1;
        dfs(0, n);
        cout << (bl ? "YES\n" : "NO\n");
    }
    return 0;
}
