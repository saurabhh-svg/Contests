#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n,color=1;
    string s;
    cin >> n >> s;
  
    vector<int> bal(n + 1);
    for (int i = 0; i < n;i++){
        if(s[i]=='(')
            bal[i + 1] = bal[i] + 1;
        else
            bal[i + 1] = bal[i] - 1;
    }
    if(bal.back()!=0){
        cout << -1 << endl;
        return;
    }

    if (*min_element(bal.begin(), bal.end()) == 0 || *max_element(bal.begin(), bal.end()) == 0){
        cout << 1 << "\n";
        for (int i = 0; i < n;i++){
            if(i)cout << " ";
            cout << 1;
        }
        cout << endl;
    }
    else{
        cout << 2 << endl;
        vector<int> ans;
        int curr = 0;
        while(curr<n){
            int w = (s[curr] == '(' ? 1 : 2);
            do{
                curr++;
                ans.push_back(w);
            } while (bal[curr] != 0);
        }
        for (int i = 0; i < n; i++)
        {
            if (i)  cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }
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
