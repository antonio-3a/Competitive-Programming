/**
 ** Code by: "António 3A"
 ** UVa: 347 - Run
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("main/input.txt", "r", stdin);
#define out freopen("main/output.txt", "w", stdout);
#define ccl(i, begin, end) for(auto i = begin; i < end; i ++)

typedef long long ll;
int const mx = 9682415;
int N[mx+1];

bool run(string x)
{
    int l = x.size();
    set<char> S;
    for(char c : x)
        S.insert(c);
    if(S.size() != l)
        return 0;
    int m = 1 << l, g = 0, n = 0;
    m--;
    while(g != m || n)
    {
        n += x[n]-'0';
        n %= l;
        if(g & 1 << n)
            return 0;
        g |= 1 << n;
    }
    return 1;
}

int main()
{
    fIO
    //in
    //out
    int i, n = mx;
    for(i = mx; i; i--)
    {
        if(run(to_string(i)))
            n = i;
        N[i] = n;
    }
    while(cin >> n && n)
        cout << "Case " << ++i << ": " << N[n] << "\n";
    return 0;
}
