/**
 ** Coded by: "António 3A"
 ** UVa: 147 - Dollars
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
    
    int n = 3E4+1, C[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000}, s;
    ll N[n], x;
    memset(N, 0, sizeof N);
    N[0] = 1;
    double d;
    ccl(i, 0, 10)
        ccl(j, C[i], n-1)
            N[j] += N[j-C[i]];
    while(cin>>d && d)
    {
        n = (d+1E-3)*100;
        s = (n < 1000 ? 2 : n < 10000 ? 1 : 0);
        ccl(i, 1, s)
            cout<<" ";
        cout<<fixed;
        cout.precision(2);
        cout<<d;
        x = N[n];
        s = 17-str(x).size();
        ccl(i, 1, s)
            cout<<" ";
        cout<<x<<"\n";
    }
    return 0;
}
