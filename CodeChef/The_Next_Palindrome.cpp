#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve(){
    string n;
    cin >> n;
    string revNum = n;
    int len = n.length();
    fl(i, len / 2) revNum[len - 1 - i] = revNum[i];
    if (revNum > n)  cout << revNum << endl;
    else {
        int mid = (len - 1) / 2;
        for (int i = mid; i >= 0; i--)    {
            if (revNum[i] != '9'){
                revNum[i] = (revNum[i] + 1);
                break;
            }
            else  revNum[i] = '0';
        }
            for (int i = len / 2; i < len; i++)
                revNum[i] = revNum[len - i - 1];

            if (revNum[0] == '0') {
                revNum += '1';
                revNum[0] = '1';
            }
        
        cout << revNum << endl;
    }
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