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
   int n;
    cin >> n;
    int a[2*n];
    unordered_map<int, int> mp;
    fl(i, 2*n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i <= n;i++){
        if(mp[i]==0){
            cout << "YES" << endl;
            return;
        } if(mp[i]==1){
            cout << "NO" << endl;
            return;
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