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

void solve(ll t){
    
    ll n, m,sum=0,ans=0;
    cin >> n >> m;
    vector<int> v(n);
    fl(i, n){
        cin >> v[i];
        sum += v[i];
    }
    ans = sum % m;
    cout << "Case #" << t << ": "<< ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 for (int i = 1; i <= test;i++)
     solve(i);
 return 0;
 }