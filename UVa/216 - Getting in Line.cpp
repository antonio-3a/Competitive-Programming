/**
 ** Coded by: "António 3A"
 ** UVa: 216 - Getting in Line
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
    freopen("output.out", "w", stdout);

    double d, m;
    int c = 0, n = 8, N[8][2];
    string s, a;
    while(cin>>n and n)
    {
        m = 1E9;
        s = a = "";
        ccl(i, 0, n-1)
        {
            cin>>N[i][0]>>N[i][1];
            s += str(i);
        }
        do
        {
            d = 0;
            ccl(i, 1, n-1)
                d += sqrt(pow(N[s[i]-'0'][0]-N[s[i-1]-'0'][0], 2)+pow(N[s[i]-'0'][1]-N[s[i-1]-'0'][1], 2));
            if(m > d)
            {
                m = d;
                a = s;
            }
        } while (next_permutation(s.begin(), s.end()));
        
        cout<<"**********************************************************\nNetwork #"<<++c<<"\n";
        cout<<fixed;
        cout.precision(2);
        m = 0;
        s = a;
        ccl(i, 1, n-1)
        {
            d = sqrt(pow(N[s[i]-'0'][0]-N[s[i-1]-'0'][0], 2)+pow(N[s[i]-'0'][1]-N[s[i-1]-'0'][1], 2))+16;
            m += d;
            cout<<"Cable requirement to connect ("<<N[s[i-1]-'0'][0]<<","<<N[s[i-1]-'0'][1]<<")";
            cout<<" to ("<<N[s[i]-'0'][0]<<","<<N[s[i]-'0'][1]<<") is "<<d<<" feet.\n";
        }
        cout<<"Number of feet of cable required is "<<m<<".\n";
    }
    return 0;
}
