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

void solve()
{
    ll n, q, l, r, diff = 0, diff1 = 0, flag = 1;
    cin >> n >> q;
    string a, b, tempa, tempb;
    cin >> a >> b;
    vector<ll> left, right;
    fl(i, q)
    {
        cin >> l >> r;
        left.pb(l);
        right.pb(r);
    }
    diff = b[left[0] - 1] - 'a' - a[left[0] - 1] - 'a';
    fl(i, q)
    {
        tempa = a;
        if (left[i] == right[i])
            cout << "Yes" << endl;
        else
        {
            for (int j = left[i] - 1; j < right[i] - 1; j++)
            {
                if (a[j] <= b[j])
                    diff = b[j] - a[j];
                else
                    diff = 26 - a[j] + b[j];
                cout << diff << " ";

                // if (j != right[i] - 1)
                tempa[j + 1] = tempa[j + 1] - 'a' + diff;
            }
            if (tempa.substr(left[i] - 1, right[i] - 1) == b.substr(left[i] - 1, right[i] - 1))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
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

/*
 diff=abs(b[right[i]-2]-'a'-(a[right[i]-2]-'a'));
          diff1 = abs(b[right[i] - 1] - 'a' - (a[right[i] - 1] - 'a'));
         if(diff<0) diff = 26 + diff;
         if (diff1 < 0)  diff1 = 26 + diff1;
         if (diff == diff1)
             cout << "Yes" << diff << " " << diff1 << endl;
         else
             cout << "No" << diff << " " << diff1 << endl;
*/