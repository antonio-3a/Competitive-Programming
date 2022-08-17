/**
 ** Code by: "António 3A"
 ** UVa: 10282 - Babelfish
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

    string s, S[2];
    map<string, string> m;
    while(getline(cin, s) and s != "")
    {
        S[0] = S[1] = "";
        int a = 0, l = s.size();
        ccl(i, 0, l)
        {
            if(s[i] == ' ')
            {
                a++;
                continue;
            }
            S[a] += s[i];
        }
        m[S[1]] = S[0];
    }
    while(cin >> s)
        cout << (m[s] == "" ? "eh" : m[s])<< "\n";
    return 0;
}
