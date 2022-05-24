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
ll n,m,flag=0;
cin >> n;
vector<int> v(n);
fl(i, n) cin >> v[i];
sortrev(v);
cin >> m;
vector<int> b(m);
fl(i, m) cin >> b[i];
sortrev(b);
for (int i = 0; i < min(m, n);i++){
    if(v[i]>b[i]){
        cout << "Alice" << endl;
        flag = 1;
        break;
    }else if(v[i]<b[i]){
        cout << "Bob" << endl;
        flag = 1;
        break;
    }
}
if(flag==0){
    if(m>n)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
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