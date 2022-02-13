//*************************************************************
//-------------------Code By: Saurabh Singh-------------------
//*************************************************************

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    vector<int> v;
    for (int i = 1; v.size() <= 1010;i++){
    if(__builtin_popcountll(i)%2==0) //if number of set bits even
        v.pb(i);
    }
    ll n;
    cin >> n;
    fl(i, n) cout << v[i] << " ";
    cout << endl;
}

//*****************************************************************
//------------------------------main begins-----------------------------
//******************************************************************

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }