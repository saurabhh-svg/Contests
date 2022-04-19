#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
using namespace std;

void solve()
{
    ll n, r, b,a;cin >> n >> r >> b;
    a = ceil(r / float(b + 1));
    while (n){
        ll a = ceil(r / float(b + 1));
        while (a-- && r--) {
            cout << "R"; n--;
        }
        if (b--) {
            cout << "B"; n--;
        }
    }
    cout << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;cin>>test;
 while(test--) solve();
return 0;
 }