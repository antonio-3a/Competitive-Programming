/**
 ** Code by: "Antonio 3A"
 ** UVa: 10696 - f91
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

int f91(int n)
{
    if(n > 100)
        return n - 10;
    return 91;
}
int main()
{
    fIO
    //in
    //out

    int n = 1;
    while (cin  >>  n and n)
        cout << "f91(" << n << ") = " << f91(n) << "\n";
    
    return 0;
}
