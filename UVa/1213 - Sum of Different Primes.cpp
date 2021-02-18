/**
 ** Coded by: "António 3A"
 ** UVa: 1213 - Sum of Different Primes
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;

int main()
{
    fIO; in; //out;
    
    int n = 1120, k, NK[n+1][15];
    bool P[n+1];
    memset(P, 0, sizeof P);
    memset(NK, -1, sizeof NK);
    NK[0][0] = 0;
    ccl(i, 2, n)
    {
        if(P[i]) continue;
        for(int j = i*i; j <= n; j += i)
            P[j] = 1;
        
        for(int j = n; j >= i; j--)
            ccl(k, 1, 14)
                if(NK[j-i][k-1] > -1)
                    NK[j][k] += NK[j-i][k-1]+1;
    }
    while (cin >> n >> k and n and k)
        cout << NK[n][k]+1 << "\n";
    
    return 0;
}
