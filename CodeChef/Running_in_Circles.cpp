#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve(int t)
{
    int l, n,ans=0,rem=0,d,dist=0;
    cin >> l >> n;
    char c;
    vector<pair<int, char>> v;
    for (int i = 0; i < n; i++){
        cin >> d >> c;
        v.pb({d, c});
    }
    rem = (v[0].first % l);
    dist += v[0].first;
    for (int i = 1; i < n; i++) {
       if(v[i].second==v[i-1].second){
           dist += v[i].first;
           rem+=(v[i].first%l);
       }
        else{
           v[i].first -= rem;
           rem -= (v[i].first % l);
           dist += v[i].first;
        }
        rem = abs(rem);
        ans += (rem / l);
        rem = rem % l;
    }
    ans += (abs(dist)) / l;
    cout << "Case #" << t << ": ";
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}