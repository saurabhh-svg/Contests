#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll x, s,a[32]={0},set[32]={0};
    cin >> x >> s;
if(x==1){
     cout << s << endl;
            return;
}
for (int i = 0; i < 32;i++){
if(x&(1<<i)) //counting number of set bits in given OR
    a[i]++;
}
for (int i = 0; i < 32;i++){
    if(a[i]==1)
        set[i]++;
}

    cout << "-1" << endl;
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }