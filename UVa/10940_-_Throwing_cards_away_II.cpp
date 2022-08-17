/**
 ** Code by: "António 3A"
 ** UVa: 10940 - Throwing cards away II
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fIO ios::sync_with_stdio(0); cin.tie(0);
#define in freopen("input.in", "r", stdin);
#define out freopen("output.out", "w", stdout);
#define ccl(i, begin, end) for(auto i = begin; i < end; i ++)
#define mms(array, value) memset(array, value, sizeof array)
typedef long long ll;

int main()
{
    fIO
    //in
    //out

    int n =  5E5+1, N[n], x = 0, y = 0;
    mms(N, 0);
    ccl(i, 1, n)
        if(i == 1 << x)
            N[i] = i, y = 2, x++;
        else
            N[i] = y, y += 2;
    while(cin >> n && n)
        cout << N[n] << "\n";
    return 0;
}
