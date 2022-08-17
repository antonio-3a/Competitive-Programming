/**
 ** Code by: "António 3A"
 ** UVa: 10935 - Throwing cards away I
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

typedef long long ll;

int main()
{
    fIO
    //in
    //out

    int n;
    while(cin >> n and n)
    {
        deque<int> d;
        ccl(i, 1, n+1)
            d.push_back(i);
        cout << "Discarded cards:";
        while(!d.empty())
            if(d.size() == 1)
            {
                cout << "\n";
                cout << "Remaining card: " << d.front() << "\n";
                d.pop_front();
            }
            else
            {
                cout << (d.front() == 1 ? "" : ",");
                cout << " " << d.front();
                d.pop_front();
                d.push_back(d.front());
                d.pop_front();
            }
    }
    return 0;
}
