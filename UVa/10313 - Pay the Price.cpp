/**
 ** Coded by: "António 3A"
 ** UVa: 10313 - Pay the Price
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)
 
using namespace std;
typedef long long ll;

vector<int> split(string s)
{
    vector<int> V;
    int n = 0;
    for(char c : s)
        if(c == ' ')
        {
            V.push_back(n);
            n = 0;
        }
        else
        {
            n *= 10;
            n += c-'0';
        }
    V.push_back(n);
    return V;
}

int main()
{
    fIO;
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int n = 300, a, b;
    ll N[n+1][n+1], x;
    string s;
    vector<int> V;
    memset(N, 0, sizeof N);
    N[0][0] = 1;
    ccl(k, 1, n)
        ccl(i, k, n)
            ccl(j, 1, n)
                N[i][j] += N[i-k][j-1];
    
    ccl(i, 0, n)
        ccl(j, 1, n)
            N[i][j] += N[i][j-1];
    
    while(getline(cin, s))
    {
        V = split(s);
        n = V[0];
        a = 0, b = n;
        if(V.size() == 2)
        {
            b = V[1];
            b = b > 300 ? 300 : b;
        }
        else if(V.size() == 3)
        {
            a = V[1], b = V[2];
            a = a > 300 ? 300 : a;
            b = b > 300 ? 300 : b;
        }
        x = N[n][b] - (a ? N[n][a-1] : 0);
        cout<<x<<'\n';
    }
    return 0;
}
