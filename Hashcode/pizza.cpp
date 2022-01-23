//*************************************************************
//-------------------Code By: Saurabh Singh-------------------
//*************************************************************

#include <bits/stdc++.h>
#include <fstream>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cin(arr,n)        for(int i=0;i<n;i++)cin>>arr[i]
#define cout(arr,n)       for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;

void solve(){
    ll m, t2, t3, t4,p;
    string sin;
    cin >> m >> t2 >> t3 >> t4;
    vector<vector<string> > v;
    vector<string> s;
    vector<int> vn;
    for (int i = 0; i < m;i++){
        cin >> p;
        vn.pb(p);
        for (int j = 0; j < vn[i]; j++)
        {
            cin >> sin;
            s.pb(sin);
        }
        v.pb(s);
        s.clear();
    }

    for (int i = 0; i < vn.size(); i++)
    {
        cout << vn[i] << "  ";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << "  ";
        }
        cout << endl;
    }
}

//*****************************************************************
//----------------------------main begins---------------------------
//******************************************************************

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    _ solve();
    return 0;
 }