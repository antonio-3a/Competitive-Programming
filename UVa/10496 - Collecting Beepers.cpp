/**
 ** Coded by: "António 3A"
 ** UVa: 10496 - Collecting Beepers
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)
 
using namespace std;
typedef long long ll;

int main()
{
    fIO;
    in; out;
    int t, n, N[10][2], x, y, a, b, m, d;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b>>n;
        s = "";
        m = 1E9;
        n--;
        ccl(i, 0, n)
        {
            cin>>N[i][0]>>N[i][1];
            s += str(i);
        }
        do
        {
            d = abs(a-N[s[0]-'0'][0])+abs(b-N[s[0]-'0'][1])+abs(a-N[s[n]-'0'][0])+abs(b-N[s[n]-'0'][1]);
            ccl(i, 1, n)
                d += abs(N[s[i-1]-'0'][0]-N[s[i]-'0'][0])+abs(N[s[i-1]-'0'][1]-N[s[i]-'0'][1]);
            m = min(d, m);
        } while (next_permutation(s.begin(), s.end()));
        cout<<"The shortest path has length "<<m<<"\n";
    }
    return 0;
}
