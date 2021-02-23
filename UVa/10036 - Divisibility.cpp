/**
 ** Coded by: "António 3A"
 ** UVa: 10036 - Divisibility
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
    
    int t;
    cin >> t;
    while(t--)
    {
        int a = 0, b = 1, n, k, x, y;
        cin >> n >> k >> x;
        bool K[2][k];
        x = (x % k + k) % k;
        memset(K[a], 0, sizeof K[a]);
        K[0][x] = 1; 
        while(--n)
        {
            cin >> x;
            y = -x;
            x = (x % k + k) % k;
            y = (y % k + k) % k;
            memset(K[b], 0, sizeof K[b]);
            ccl(i, 0, k-1)
                if(K[a][i])
                    K[b][(i + x) % k] = K[b][(i + y) % k] = 1;
            swap(a, b);
        }
        cout << (K[a][0] ? "Divisible\n" : "Not divisible\n");
    }
    return 0;
}
