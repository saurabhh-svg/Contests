#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

string UpdatedString(string s)
{

    string newString = "#";
    for (auto ch : s)
    {
        newString += ch;
        newString += "#";
    }
    return newString;
}

int lps(string s)
{
    s = UpdatedString(s);
    int LPS[s.length()] = {};
    int C = 0;
    int R = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int imir = 2 * C - i;

        if (R > i)
            LPS[i] = min(R - i, LPS[imir]);

        else
            LPS[i] = 0;

        while (((i + 1 + LPS[i]) < s.length()) && ((i - 1 - LPS[i]) >= 0) && s[i + 1 + LPS[i]] == s[i - 1 - LPS[i]])
            LPS[i] += 1;

        if (i + LPS[i] > R)
        {
            C = i;
            R = i + LPS[i];
        }
    }

    int r = 0, c = -1;
    for (int i = 0; i < s.length(); i++)
    {
        r = max(r, LPS[i]);
        if (r == LPS[i])
        {
            c = i;
        }
    }
    return r;
}

int difference(string input1)
{
    int n = input1.size();
    int l1 = lps(input1);
    if (n > 0)
        return l1 - 1;
    else
        return 0;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    cout << difference(s);
}