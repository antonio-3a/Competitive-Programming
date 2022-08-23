/**
 ** Code by: "António 3A"
 ** UVa: 10976 - Fractions Again?!
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
#define str(n) to_string(n)
typedef long long ll;

int main()
{
    fIO
    //in
    //out

    int k, x;
    while(cin >> k)
    {
        vector<int> v;
        ccl(i, k+1, 2*k+1)
        {
            x = k * i / (i - k);
            if(k * (i + x) == i * x)
                v.push_back(i);
        }
        cout << v.size() << "\n";
        for(int y : v)
            cout << "1/" << k << " = 1/" << k*y/(y-k) << " + 1/" << y << "\n";
    }
    return 0;
}
