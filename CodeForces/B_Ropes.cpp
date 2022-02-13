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

// Binary search for REAL numbers
bool cancut(double m,int n,int k,int a[])
{
    int s=0;
    for (int i = 0; i < n; i++){
        s += floor(a[i] / m);
    }
      if(s>=k)  return true;
    return false;
}

void solve()
{

    int n,k;
    cin >> n>>k;
    int a[n];
fl(i,n) cin >> a[i];
    double l = 0.0, h = 1e8, m;
    // while(h-l>pow(10,-6)) //not good for big differences
    for (int i = 0; i < 100; i++)
    { // for log(10^18 ) iterations
        m = (l + h) / 2;
        if (cancut(m,n,k,a ))
            l = m;
        else
            h = m;
    }
    cout <<setprecision(20)<< l << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
    solve();
    return 0;
}