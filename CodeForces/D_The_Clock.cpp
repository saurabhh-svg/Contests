#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

bool ispalin(int h, int m){
    string hr = "", min = "";
    if (h < 10)  hr = '0' + to_string(h);
    else hr = to_string(h);
    if (m < 10)  min = '0' + to_string(m);
    else min = to_string(m);
    reverse(min.begin(), min.end());
    return hr == min;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--){
        int t, ans = 0;
        string s;  cin >> s >> t;
        string hs = s.substr(0, 2), ms = s.substr(3, 2);
        int hr = stoi(hs), min = stoi(ms);
        int oh = hr, om = min;
        do{
            min += t;
            hr += min / 60;
            min %= 60;
            hr %= 24;
            ans += ispalin(hr, min);
        } while (hr != oh || om!=min);
        cout << ans << endl;
    }
    return 0;
}