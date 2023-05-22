#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> st;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        temp.push_back(s[i]);
        temp.push_back(s[i + 1]);
        st.insert(temp);
    }
    cout << st.size() << endl;
    ;
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