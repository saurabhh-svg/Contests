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
    int n, m, x;
    cin >> n >> m >> x;
    pair<int,int> p[n];
    fl(i, n) {
        cin>>p[i].first;
        p[i].second = i + 1;
    }
    sort(p,p+n); //sorting on basis of height

    set <pair<int,int> > s;
    for (int i = 0; i < m;i++){
        pair<int,int> x = make_pair(0,i);
        s.insert(x); //inserting all indexes
    }
    for (int i = 0; i < n;i++){

    }

    // to store current height of towers and their number

    // set automatically arranges its values in ascending order

}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }