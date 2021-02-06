/**
 ** Coded by: "António 3A"
 ** UVa: 11462 - Age Sort
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

    int N[100], n, x;
    while(cin>>n and n)
    {
        memset(N, 0, sizeof N);
        ccl(i, 1, n)
            cin>>x, N[x]++;
        ccl(i, 1, 99)
            while(N[i]-- && n--)
                cout<<i<<(n ? " " : "\n");
    }
    return 0;
}
