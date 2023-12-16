#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s, ans = "";
    cin >> s;
    vector<int> lowerCase, upperCase;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            if (lowerCase.size())
            {
                ans[lowerCase[lowerCase.size() - 1]] = '@';
                lowerCase.pop_back();
            }
        }
        else if (s[i] == 'B')
        {
            if (upperCase.size())
            {
                ans[upperCase[upperCase.size() - 1]] = '@';
                upperCase.pop_back();
            }
        }
        else
        {
            ans.push_back(s[i]);
            if (isupper(s[i]))
                upperCase.push_back(ans.size() - 1);
            else
                lowerCase.push_back(ans.size() - 1);
        }
    }
    for (auto i : ans)
    {
        if (i != '@')
            cout << i;
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}