#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;
bool ispalin(string s){
    fl(i, s.length()/2) {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}
ll counter(string s){
    ll ans = 0;
    fl(i, s.length()){
        if (s[i] == '?')   ans++;
    }
    return ans;
}
void solve(int t){
    ll n;  cin >> n;
    string s;cin >> s;
    cout << "Case #" << t << ": ";
    ll j=5 ;
    string temp = "";
    for (int i = 0; i < n; i++) {
        j = 5;
        while (i + j <= n){
             temp = s.substr(i, i + j);   j++;
            //cout << temp << " ";
            if (ispalin(temp) && (counter(temp) <=1)) {
                    cout << "IMPOSSIBLE" << endl;
                    return;
                }
        }
    }
     cout << "POSSIBLE" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}