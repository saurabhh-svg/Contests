#include <bits/stdc++.h>
#define int long long int
using namespace std;

int lps(string s, int i, int j){
    if (i == j)  return 1;
    if (s[i] == s[j] && i + 1 == j) return 2;
    if (s[i] == s[j]) return lps(s, i + 1, j - 1) + 2;
    return max(lps(s, i, j - 1), lps(s, i + 1, j));
}
void solve(){
    int n;
    string s;
    cin >> n >> s;
    int lpsSize = lps(s, 0, n);
    cout << (n - lpsSize) << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
