/**
 ** Coded by: "António 3A"
 ** UVa: 11137 - Ingenuous Cubrency
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)
 
using namespace std;
typedef long long ll;

int main()
{
    fIO;
    freopen("input.in", "r", stdin);
    
    int n = 1E4;
    ll  N[n+1];
    memset(N, 0, sizeof N);
    N[0] = 1;
    ccl(i, 1, 21)
        ccl(j, i*i*i, n)
                N[j] += N[j-i*i*i];
    while(cin>>n)
        cout<<N[n]<<"\n";
    return 0;
}
