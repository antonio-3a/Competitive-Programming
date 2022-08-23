/**
 ** Code by: "António 3A"
 ** UVa: 441 - Lotto
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i < e; i++)

typedef long long ll;

int main()
{
    fIO
    //in
    //out

    int k = 15, K[k], t = 0;
    while(cin >> k  && k)
    {
        cout << (t++ ? "\n" : "");
        ccl(i, 0, k)
            cin >> K[i];
        ccl(a, 0, k)
            ccl(b, a+1, k)
                ccl(c, b+1, k)
                    ccl(d, c+1, k)
                        ccl(e, d+1, k)
                            ccl(f, e+1, k)
                                cout << K[a] << " " << K[b] << " " << K[c] << " " << K[d] << " " << K[e] << " " << K[f] << "\n";
    }
    return 0;
}
