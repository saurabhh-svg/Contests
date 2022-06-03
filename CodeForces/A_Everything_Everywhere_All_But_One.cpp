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
    ll n,mean=0;
    cin >> n;
    vector<int> v(n);
    fl(i,n){
        cin >> v[i];
        mean += v[i];
    }
    double temp = (double)mean / n ;

    if (find(v.begin(), v.end(), temp)!=v.end())
        cout << "YES\n";
    else
        cout << "NO\n";
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }