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
    sortall(s);
    ll l = s.length();
    cout << s[l-1];
    for (int i = l-2; i >= 0; i--)
    {
        if(s[l-1]==s[i])
            cout << s[l - 1];
            else
                return;
    }
}

//===========MAIN BEGIN===========

int main(){ _ fs
solve();
return 0;
 }