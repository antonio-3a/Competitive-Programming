/**
 ** Code by: "António 3A"
 ** UVa: 10107 - What is the Median?
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, begin, end) for(auto i = begin; i < end; i ++)

typedef long long ll;

int main()
{
    fIO
    //in
    //out

    ll x = 1E5+1, X[x];
    int i = 0;
    while(cin >> X[i++])
    {
        sort(X, X+i);
        x = X[i/2];
        if(!(i&1))
            x += X[i/2-1], x >>= 1LL;
        cout << x << "\n";
    } 
    return 0;
}
