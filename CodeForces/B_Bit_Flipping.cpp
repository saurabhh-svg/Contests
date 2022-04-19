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

string change(string s,int x){
    fl(i,s.size()){
        if(i!=x){
            if(s[i]=='1')
                s[i] = '0';
            else
                s[i] = '1';
        }
    }
    return s;
}

void solve(){
    ll n, k,temp;
    string s;
    cin >> n >> k>>s;
    temp = k;
    vector<ll> ans(n,0);
    for (int i = 0; i < n - 1 && temp;i++){
        if ((s[i] == '1' && k & 1) || (s[i] == '0' && !(k & 1)))  { 
            temp--;
            ans[i] = 1;
        }
    }
    ans[n - 1] = temp;
    fl(i,n){
        if((k-ans[i]) & 1)
            s[i] ^= '0' ^ '1';
    }
    cout << s << endl;
    fl(i, n) cout << ans[i] << " ";
    cout << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }