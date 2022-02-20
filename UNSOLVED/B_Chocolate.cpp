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


void solve(){
    ll n,sum=0;
    cin >> n;
    int a[n];
    fl(i, n) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum==0){
        cout << 0 << endl;
        return;
    }
    fl(i,n){

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