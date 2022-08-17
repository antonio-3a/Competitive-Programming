/**
 ** Code by: "António 3A"
 ** UVa: 471 - Magic Numbers
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i < e; i ++)

typedef long long ll;

bool val(string x)
{
    set<char> s;
    for(char c : x)
        s.insert(c);
    return s.size() == x.size();
}
int main()
{
    fIO
    //in
    //out

    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(ll i = 1; 1; i++)
        {
            ll s1 = n * i;
            if(to_string(s1).size() > 10)
                break;
            if(!val(to_string(s1)) || !val(to_string(i)))
                continue;
            cout << s1 << " / " << i << " = " << n << "\n";
        }
        cout<< (t ? "\n" : "");
    }
    return 0;
}
