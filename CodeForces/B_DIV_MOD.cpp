#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;



void solve(){
    ll l, r, a,ans;
    cin >> l >> r >> a;
    if(r%a==a-1){
        ans = a - 1 + r / a;
    }
    else if (l / a == r / a) {
        ans = (r%a) + (r / a) ;
    }else{
        ans = a-1 -1 + (r / a);
    }

    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }