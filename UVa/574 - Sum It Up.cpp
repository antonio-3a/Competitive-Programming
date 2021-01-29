/**
 ** Coded by: "António 3A"
 ** UVa: 574 - Sum It Up
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)
 
using namespace std;
typedef long long ll;
int N[13], n, t;
set<string> S;

void solve(int i, int s, string x)
{
    if(s == t)
    {
        if(!S.count(x))
            cout<<x<<"\n";
        S.insert(x);
        return;
    }
    if(i > n || s > t)
        return;
    ccl(j, i, n)
        solve(j+1, s+N[j], x+(x.size() ? "+"+str(N[j]) : str(N[j])));
}

int main()
{
    fIO;
    freopen("input.in", "r", stdin);
    
    while(cin>>t>>n and n)
    {
        ccl(i, 1, n)
            cin>>N[i];
        cout<<"Sums of "<<t<<":\n";
        solve(1, 0, "");
        cout<<(S.size() ? "" : "NONE\n");
        S.clear();
    }
    return 0;
}
