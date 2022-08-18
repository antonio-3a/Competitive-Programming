/**
 ** Code by: "António 3A"
 ** UVa: 100 - The 3n + 1 problem
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i < e; i ++)

typedef long long ll;

int the3n(int n)
{
    if(n == 1)
        return 1;
    return 1 + the3n(n & 1 ? 3 * n + 1: n >> 1);
}

int main()
{
    fIO
    //in
    //out

    int a, b, m;
    while(cin >> a >> b)
    {
        cout <<a << " " << b << " ";
        m = max(a, b);
        a = min(a, b);
        b = m, m = 0;
        ccl(i, a, b+1)
            m = max(m, the3n(i));
        cout << m << "\n";
    }
    return 0;
}
