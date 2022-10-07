/**
 ** Code by: "Antonio 3A"
 ** UVa: 10327 - Flip Sort
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

    int n = 1E3, c, N[n], p;
    while(cin >> n)
    {
        ccl(i, 0, n)
            cin >> N[i];
        c = 0;
        ccl(i, 0, n-1)
            ccl(j, 0, n-1-i)
                if(N[j] > N[j+1])
                {
                    swap(N[j], N[j+1]);
                    c++;
                }
        cout << "Minimum exchange operations : " << c << "\n";
    }
    return 0;
}
