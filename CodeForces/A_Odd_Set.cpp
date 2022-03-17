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
    ll n,o=0,e=0,x; cin>>n;

    fl(i,2*n){
        cin >> x;
if(x%2==0)
    e++;
    else
        o++;
    }
    if(o==e)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }