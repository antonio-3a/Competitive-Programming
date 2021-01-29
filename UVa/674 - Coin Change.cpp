/**
 ** Coded by: "António 3A"
 ** UVa: 674 - Coin Change
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
    
    int n = 7489, C[5] = {1, 5, 10, 25, 50};
    ll  N[n+1];
    memset(N, 0, sizeof N);
    N[0] = 1;
    ccl(i, 0, 4)
        ccl(j, C[i], n)
                N[j] += N[j-C[i]];
    while(cin>>n)
        cout<<N[n]<<"\n";
    return 0;
}
