#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)aa
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<ll>())
using namespace std;

void solve(){
    ll n, m, k; cin >> n >> m >> k;
    string a, b,c=""; cin >> a >> b;
    sortall(a); sortall(b);
    int i = 0, j = 0,countA=0,countB=0;
    while(i<n && j<m){
        if((a[i]<b[j] && countA<k) || countB==k){
            c += a[i];
            i++;
            countA++;
            countB = 0;
        }
        else if ((a[i] >= b[j] && countB < k) || countA == k) {
            c += b[j];
            j++;
            countB++;
            countA = 0;
        }
    }
    cout << c << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }