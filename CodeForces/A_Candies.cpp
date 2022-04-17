#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<ll>())
using namespace std;

void solve(){
    ll n,temp=0,ans=0;
    cin >> n;
    ll k = log(n) + 1;
   // cout << k<<endl;
    for (int i = 2; i < 30;i++){
        temp = pow(2, i)-1;
        if (n%temp==0){
            ans = n / temp;
            break;
        }
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