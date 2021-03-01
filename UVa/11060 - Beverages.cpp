/**
 ** Coded by: "António 3A"
 ** UVa: 11060 - Beverages
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define mms(a, v) memset(a, v, sizeof a)
#define mx (int) 101
using namespace std;
typedef long long llong;

int main()
{
    fIO
    in out
    int c = 0, n, m;
    while(cin >> n)
    {
        string s, r;
        string S[n+1];
        map<string, int> mp;
        vector<int> N[n+1];
        vector<int> T, I(n+1, 0);
        ccl(i, 1, n)
        {
            cin >> s;
            mp[s] = i;
            S[i] = s;
        }
        cin >> m;
        while(m--)
        {
            cin >> s >> r;
            N[mp[s]].push_back(mp[r]);
            I[mp[r]]++;
        }
        priority_queue<int> Q;
        ccl(i, 1, n)
            if(!I[i])
                Q.push(-i);
        while (!Q.empty())
        {
            m = -Q.top();
            Q.pop();
            T.push_back(m);
            for(int i : N[m])
                if(!--I[i])
                    Q.push(-i);
        }
        cout << "Case #" << ++c << ": Dilbert should drink beverages in this order:";
        ccl(i, T.begin(), T.end()-1)
            cout << " " <<S[*i];
        cout << ".\n\n";
    }
    return 0;
}
