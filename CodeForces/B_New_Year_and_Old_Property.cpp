#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;

ll lengthinBinary(ll n){
    int c = 0;
    while(n>0){
        n = n / 2;
        c++;
    }
    return c;
}

void solve(){
    ll left, right,ans=0;
    cin >> left>>right;
//11111111111 - 2^x -> A number with exactly one zero
    ll l = lengthinBinary(left);
    ll r = lengthinBinary(right);
    for (ll i = l; i <= r;i++){
        ll p = (1ll << (i)) - 1; //2^i - 1
        for (int j = 0; j < i - 1;j++){ // 011 like numbers are not included so upto i-2
            ll temp = p - (1ll << j); //p-2^x
            if(temp>=left && temp<=right)
                ans++;
        }
    }
    cout << ans << endl;
}
//===========MAIN BEGIN===========

int main(){ _ fs

solve();
return 0;
 }