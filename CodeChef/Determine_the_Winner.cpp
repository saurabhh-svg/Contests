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
    ll p1, p2, q1, q2;
    cin >> p1 >> p2 >> q1 >> q2;
    ll x, y;
    x = max(p1, p2);
    y = max(q1, q2);

    if(x<y)
        cout << "P" << endl;
    else if(y<x)
        cout << "Q" << endl;
    else
        cout << "TIE" << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }