/**
 ** Code by: "António 3A"
 ** UVa: 374 - Big Mod
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

ll bpm(ll b, ll p, ll m)
{
    if(!p) return 1;
    return bpm(b * b % m, p >> 1, m) * (p & 1 ? b : 1) % m; 
}

int main()
{
    fIO
    //in
    //out

    ll b, p, m;
    while (cin >> b >> p >>m)
        cout << bpm(b % m, p, m) << "\n";
    return 0;
}
