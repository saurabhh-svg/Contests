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
    string s;
    cin >> s;
    ll l = s.length(),ans=0,pl=0,mn=0,mx=0;
    fl(i,l){
         if(s[i]=='+'){
             pl++;
             mx = max(mx, pl);
             }
               else{
                 pl--;
                mn = min(mn, pl);
            }
    }
    ans = mx - mn;
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
solve();
return 0;
 }