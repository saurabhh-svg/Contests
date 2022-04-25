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
    ll n,r=0,b=0,w=0;
    string s;
    cin >> n >> s;
    fl(i,n){
        if(s[i]=='R')
            r++;
        if(s[i]=='B')
            b++;
            else
                w++;
    }
    if (n == 1 || r == n || w == n)
    {
        cout << "NO" << endl;
        return;
    }
    if((s[n-2]=='W' && s[n-1]!='W')||(s[n-1]=='W' && s[n-2]!='W')){
        cout << "NO" << endl;
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