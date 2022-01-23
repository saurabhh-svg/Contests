#include <bits/stdc++.h>
#include<unordered_map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cn(arr,n) for(int i=0;i<n;i++)cin>>arr[i]
#define ct(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;

void solve(){
  ll l, r, k,total,even,odd;
    cin >> l >> r >> k;
    total = r - l + 1;
    even = r / 2 - (l - 1) / 2;
    odd = total - even;
    // 1 2 3 4 5 6 7
    if(l==r && l>1){
        cout << "YES" << endl;
        return;
    } //replace all odd numbers with multiplication with even
    // so that 2 will become full array's gcd 
    if(k>=odd)cout << "YES" << endl;
    else cout << "NO" << endl;
}

//===========MAIN BEGIN===========

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }