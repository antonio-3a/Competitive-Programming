/**
 ** Coded by: "António 3A"
 ** UVa: 11003 - Boxes
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;
int WN[1001][3001], N[1001][2];

int solve(int i, int w) {
    if(!i) return 0;
    if(w > 3000) return 0;
    if(WN[i][w] != -1) return WN[i][w];
    if(N[i][1] < w)
        return WN[i][w] = solve(i-1, w);
    return WN[i][w] = max(solve(i-1, w+N[i][0])+1, solve(i-1, w));
}
int main()
{
    fIO; in; //out;
    
    int n;
    while(cin >> n and n)
    {
        memset(WN, -1, sizeof WN);
        ccl(i, 1, n)
            cin >> N[i][0] >> N[i][1];
        cout << solve(n, 0) << "\n";
    }
    return 0;
}
