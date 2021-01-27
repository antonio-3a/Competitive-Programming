/**
 ** Coded by: "António 3A"
 ** UVa: 10503 - The dominoes solitaire
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)

using namespace std;
typedef long long ll;
int s, n, N[15][2], a1, b1, a2, b2, B, b;

void solve(int t, int y)
{
    if(b) return;
    if(t == s)
    {
        if(y == a2)
            b = 1;
        return;
    }
    ccl(i, 0, n-1)
    {
        if(B & 1<<i)
            continue;
        if(y == N[i][0])
        {
            B = B | 1<<i;
            solve(t+1, N[i][1]);
            B = B ^ 1<<i;
        }
        if(y == N[i][1])
        {
            B = B | 1<<i;
            solve(t+1, N[i][0]);
            B = B ^ 1<<i;
        }
    }
}

int main()
{
    fIO;
    freopen("input.in", "r", stdin);

    B = 0;
    while(cin>>s && s)
    {
        b = 0;
        cin>>n;
        cin>>a1>>b1>>a2>>b2;
        ccl(i, 0, n-1)
            cin>>N[i][0]>>N[i][1];
        solve(0, b1);
        cout<<(b ? "YES\n" : "NO\n");
    }
    return 0;
}
