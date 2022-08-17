/**
 ** Code by: "António 3A"
 ** UVa: 673 - Parentheses Balance
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

bool oc(char o, char c)
{
    return o == '(' && c == ')' || o == '[' && c == ']';
}

int main()
{
    fIO
    //in
    //out

    int t;
    string p;
    cin >> t;
    getline(cin, p);
    while(t--)
    {
        deque <char> d;
        getline(cin, p);
        int l = p.size();
        char a, b;
        ccl(i, 0, l)
        {
            b = p[i];
            if(d.empty())
                d.push_back(b);
            else if(b == ')' || b == ']')
            {
                a = d.back();
                if(oc(a, b))
                    d.pop_back();
                else
                    d.push_back(b);
            }
            else
                d.push_back(b);
        }
        cout << (d.empty() ? "Yes" : "No") << "\n";
    }
    return 0;
}
