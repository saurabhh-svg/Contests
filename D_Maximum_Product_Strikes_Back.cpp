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
    ll n,cl=0,cr=0,neg=0,zero=0;
    cin >> n;
    vector<int> v(n);
    fl(i, n){
        cin >> v[i];
       if(v[i]<0)  neg++;
           if(v[i]==0)  zero++;
    }
    if(neg%2==0 && zero==0){
        cout << 0 << " " << 0 << endl;
        return;
    }
    
    ll l = 0, r = n - 1;
    while (l<r){
        if(v[l]<=0 ){
            cl++;
        l++;
    }
    if(v[r]<=0){
        cr++;
        r++;
    }
    
    }
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }