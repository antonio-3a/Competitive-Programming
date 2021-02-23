/**
 ** Coded by: "António 3A"
 ** UVa: 280 - Vertex
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;
bool N[101];
int q;
vector<int> G[101];

void dfs(int x)
{
    for(int v : G[x])
        if(!N[v])
        {
            N[v] = 1;
            q--;
            dfs(v);
        }
}

int main()
{
    fIO; in; //out;
    int n, a, b;
    while(cin >> n and n)
    {
        ccl(i, 0, n)
            G[i].clear();
        while(1)
        {
            cin >> a;
            if(!a) break;
            while(cin >> b and b)
                G[a].push_back(b);
        }
        cin >> a;
        while(a--)
        {
            cin >> b;
            q = n;
            ccl(i, 0, n)
                N[i] = 0;
            dfs(b);
            cout << q;
            ccl(i, 1, n)
                if(!N[i])
                    cout << " " << i;
            cout << "\n";
        }
    }
    return 0;
}
