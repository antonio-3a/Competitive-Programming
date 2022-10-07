/**
 ** Code by: "Antonio 3A"
 ** UVa: 11650 - Mirror Clock
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define ccl(i, b, e) for(auto i = b; i < e; i++)

typedef long long ll;

int main()
{
    fIO
    //in
    //out

    int t, h, m, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d:%d", &h, &m);
        h = h == 12 ? 0 : h;
        n = 12 * 60 - h * 60 - m;
        printf("%02d:%02d\n", n / 60 ? n / 60 : 12, n % 60);
    }
    return 0;
}
