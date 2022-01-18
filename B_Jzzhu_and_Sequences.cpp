#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll x, y, n,a; cin >> x >> y>>n;
    ll md = 1000000007;
    vector<ll> ans;
    ans.pb(x-y);
    ans.pb(x);
    ans.pb(y);
    // every 6th element is same by fi+1=fi-fi-1
    /*
    a1 = x; 2
    a2 = y;  3
    a3 =  a2-a1; 1
    a4 = a3 - a2; -2
    a5 = a4 - a3; -3
 a6 = a5-a4; -1
 a7=a6-a5; 2  //start repeating
 
    */
    for (int i = 2; i <6;i++){
        ll temp = ans[i] - ans[i - 1];
        ans.pb(temp);
    }
    
    a = ans[n % 6]%md ;
    //cout << a << endl;
    if(a<0)
        a = md + a;
    cout << a<< endl;
}

int main(){ _

solve();

return 0;
 }