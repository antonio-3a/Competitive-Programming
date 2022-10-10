/**
 ** Code by: "Antonio 3A"
 ** UVa: 195 - Anagram
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

int cmp(char a, char b)
{
    if(abs(a - b) == 'a' - 'A')
        return a < b;
    return tolower(a) < tolower(b);
}

int main()
{
    //fIO
    //in
    //out

    int n = 1;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end(), cmp);
        do
            cout << s << "\n";
        while (next_permutation(s.begin(), s.end(), cmp));
    }
    return 0;
}
