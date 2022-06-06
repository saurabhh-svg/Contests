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
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    c1 = s[0] - '0' + s[1] - '0' + s[2] - '0';
    c2 = s[3] - '0' + s[4] - '0' + s[5] - '0';
    if(c1==c2)
        cout << "YES" << endl;
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