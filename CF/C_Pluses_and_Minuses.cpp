#include <bits/stdc++.h>
#include<unordered_map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
using namespace std;

void solve(){
    string s;
    cin >> s;
    ll len = s.length();
    ll res = 0,c=0;
    for (int i = 0; i < len;i++)
    {
        res++;
        if (s[i] == '+') c++;
            else c--;
                if(c<0){
                    res = res + (i + 1);
                    c = 0;
                }
    }
    cout << res << endl;
}

//===========MAIN BEGIN===========

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }