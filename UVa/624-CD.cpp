/**
 ** Coded by: "António 3A"
 ** Uva: 624 - CD
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)

using namespace std;
typedef long long ll;

int n, t, T[21], m;
string a;

void solve(int i, int s, string o)
{
    ccl(j, i+1, t)
    {
        if(s+T[j] > n)
        {
            if(n-s < m)
            {
                m = n-s;
                a = o+"sum:"+to_string(s)+"\n";
            }
            continue;
        }
        solve(j, s+T[j], o+to_string(T[j])+" ");
    }
    if(i == t && n-s < m)
    {
        m = n-s;
        a = o+"sum:"+to_string(s)+"\n";
    }
}

int main()
{
    fIO;
    freopen("input.in", "r", stdin);

    while(cin>>n>>t)
    {
        ccl(i, 1, t)
            cin>>T[i];
        m = 1E6;
        a = "";
        solve(0, 0, "");
        cout<<a;
    }
    return 0;
}
