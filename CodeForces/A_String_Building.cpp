#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)

using namespace std;

void solve(){
    string s; cin >> s;
    int a[5] = {1, 2, 3, 4, 5};
    for(auto i: a)
        cout << i << " ";
    cout << "YES" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}