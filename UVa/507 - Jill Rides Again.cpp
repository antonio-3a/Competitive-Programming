/**
 ** Coded by: "António 3A"
 ** UVa: 507 - Jill Rides Again
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
    
    int t, r, x, s, m, a, b, a1, b1;
    cin>>t;
    ccl(i, 1, t)
    {
        cin>>r;
        m = INT_MIN;
        s = 0, a1 = -1;
        ccl(j, 1, r-1)
        {
            cin>>x;
            if(!s && a1 < 0) a1 = j;
            s += x;
            b1 = j;
            if(s > m)m = s, a = a1, b = b1;
            else if(s == m && b1-a1 > b-a) a = a1, b = b1;
            if(s < 0) s = 0, a1 = -1;
        }
        if(m < 0)
            cout<<"Route "<<i<<" has no nice parts\n";
        else
            cout<<"The nicest part of route "<<i<<" is between stops "<<a<<" and "<<b+1<<"\n";
    }
    return 0;
}
