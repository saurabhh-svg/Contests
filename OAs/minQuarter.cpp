#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<string> s(n);
    for (int i = 0; i < n;i++)
        cin >> s[i];

    vector<int> newS(n);

    for (int i = 0; i < n;i++){
        s[i][1] = '1';
        newS[i] = stoi(s[i]);
    }
    sort(newS.begin(), newS.end());
    string ans = to_string(newS[0]);
    ans[1] = 'Q';
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
 solve();
 }

