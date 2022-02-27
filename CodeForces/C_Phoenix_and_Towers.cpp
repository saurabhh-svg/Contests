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
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> v,c;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        v.push_back(i + 1); //index vector 
        c.push_back(x); //height vector
    }
    for (int i = 0; i < n - m; i++) {
        int x;
        cin >> x;
      int y = min_element(c.begin(), c.end()) - c.begin();
        v.push_back(y + 1);
        c[y] += x;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)  cout << v[i] << " ";

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