/**
 ** Code by: "António 3A"
 ** UVa: 10812 - Beat the Spread!
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

bool tf(int s, int d, int a, int b)
{
    if(a < 0 || b < 0)
        return 0;
    if(a + b != s || a - b != d)
        return 0;
    return 1;
}

int main()
{
    fIO
    //in
    //out

    int t, s, d, a, b;
    cin >> t;
    while(t--)
    {
        cin >> s >> d;
        a = (s + d) / 2;
        b = s - a;
        if(!tf(s, d, a, b))
            cout << "impossible\n";
        else
            cout << a << " " << b << "\n";
    }
    return 0;
}
