/**
 ** Coded by: "António 3A"
 ** UVa: 562 - Dividing coins
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define ccl(i, b, e) for(int i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long ll;

int main()
{
    fIO; in;
    
    int n = 25001, t, sm, m, C[100], N[n];
    cin>>t;
    while(t--)
    {
        cin>>n;
        sm = m = 0;
        ccl(i, 0, n-1)
            cin>>C[i], sm += C[i];
        memset(N, -1, sizeof N);
        N[0] = 0;
        ccl(i, 0, n-1)
            ccl(j, 0, sm>>1)
                if(N[j] != -1)
                {
                     m = max(m, j);
                    if(N[j] == i+1 || j+C[i] > sm>>1)
                        continue;
                    if(N[j+C[i]] == -1)
                    N[j+C[i]] = i+1;
                   
                }
        sm -= m<<1;
        cout<<sm<<"\n";
    }
    return 0;
}
