/**
 ** Coded by: "António 3A"
 ** UVa: 10664 - Luggage
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define ccl(i, b, e) for(int i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long ll;

vector<int> split(string s)
{
    int n = 0;
    vector<int> V;
    for(char c : s)
        if(c == ' ')
        {
            V.push_back(n);
            n = 0;
        }
        else
            n *= 10, n += c-'0';
    V.push_back(n);
    return V;
}

int main()
{
    fIO; in;
    
    int n = 101, t, sm, m, N[n];
    vector<int> C;
    string st;
    cin>>t;
    getline(cin, st);
    while(t--)
    {
        getline(cin, st);
        C = split(st);
        n = C.size();
        sm = m = 0;
        ccl(i, 0, n-1)
            sm += C[i];
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
        cout<<(sm ? "NO\n" : "YES\n");
    }
    return 0;
}
