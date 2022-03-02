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
    ll n,diff=0;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    fl(i, n){
        cin >> v[i];
        if(v[i]<=n) s.insert(v[i]);
    }
    sortall(v);
    if(s.size()==n) {
        cout << "YES" << endl;
        cout << n + 1 << endl;
        return;
    }
    int d = s.size(),temp=0;
    temp = d+1;
    int ans = v[d] - temp;
    for (int i = d; i < n; i++)
    {
        if(v[i]-temp!=ans || ans<=1){
            cout << "NO" << endl;
            return;
        }
        temp++;
    }
        cout << "YES" <<" " <<ans<<endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }