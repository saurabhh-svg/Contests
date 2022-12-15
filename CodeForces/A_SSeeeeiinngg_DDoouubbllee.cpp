#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    char a[2*n];
    int j = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i];
        a[j--] = s[i];
    }
    for (int i = 0; i < 2 * n;i++)
        cout << a[i];
    cout << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }