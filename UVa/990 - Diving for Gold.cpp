/**
 ** Coded by: "António 3A"
 ** UVa: 990 - Diving for Gold
**/
#include <bits/stdc++.h>
#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i <= e; i++)
#define str(n) to_string(n)

using namespace std;
typedef long long llong;

int main()
{
    fIO; //in; //out;
    
    int t, w, d, v, n, c = 0, da;
    while (cin >> t >> w)
    {
        pair<int, vector<int>> T[2][t+1];
        int a = 0, b = 1;
        cout << (c ? "\n" : "");
        cin>>n;
        int N[n+1][2];
        ccl(i, 1, n)
        {
            cin>>d>>v;
            N[i][0] = d, N[i][1] = v;
            da = 3*d*w;
            ccl(j, 0, t)
            {
                T[b][j] = T[a][j];
                if(j >= da)
                    if(T[a][j-da].first+v > T[b][j].first)
                        {
                            T[b][j] = T[a][j-da];
                            T[b][j].first += v;
                            T[b][j].second.push_back(i);
                        }
            }
            swap(a, b);
        }
        cout << T[a][t].first << "\n" << T[a][t].second.size() << "\n";
        for(int p : T[a][t].second)
            cout << N[p][0] << " " << N[p][1] << "\n";
        c++;
    }
    return 0;
}
