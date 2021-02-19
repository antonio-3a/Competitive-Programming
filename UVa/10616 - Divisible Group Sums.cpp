/**
 ** Coded by: "António 3A"
 ** UVa: 10616 - Divisible Group Sums
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
    fIO; in; out;
    int n, q, c = 0;
    while(cin >> n >> q and n and q)
    {
        llong N[n+1];
        ccl(i, 1, n)
            cin >> N[i];
        cout << "SET " << ++c << ":\n";
        ccl(i, 1, q)
        {
            int d, m, a;
            cin >> d >> m;
            llong M[n+1][d][m+1];
            memset(M, 0, sizeof M);
            M[0][0][0] = 1;
            ccl(j, 1, n)
                ccl(k, 0, d-1)
                    ccl(l, 0, m)
                    {
                        M[j][k][l] += M[j-1][k][l];
                        a = (k+N[j]%d+d)%d;
                        if(l) M[j][k][l] += M[j-1][a][l-1];
                    }
            cout << "QUERY " << i << ": " << M[n][0][m] <<"\n";
        }
    }
    return 0;
}
