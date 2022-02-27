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
    ll n, q, index,count[5]={0},ans=0;
    char ch;
    cin >> n >> q;
    string s, str;
    cin >> s;
    str = s;
    int j = 0, sub_count = 0;
    while (j < n){
        if (s[j] == 'a' && s[j + 1] == 'b' && s[j + 2] == 'c')   {
            sub_count++;
            j=j+2;
        }else
            j++;
    }
    for (int i = 0; i < q; i++) {
        cin >> index >> ch;
        str[index - 1] = ch;
        if(ch=='a'){
            if(str[index-1]=='a'){
                cout << sub_count << endl;
            }
            if (str[index]=='b' && str[index+1]=='c'){
                cout << sub_count+1<< endl;
            }
        
        }
        if (ch == 'b')
        {
            if (str[index - 1] == 'b')
            {
                cout << sub_count << endl;
            }
            if (str[index-2] == 'a' && str[index ] == 'c')
            {
                cout << sub_count + 1 << endl;
            }
        }
        if (ch == 'c')
        {
            if (str[index - 1] == 'c')
            {
                cout << sub_count << endl;
            }
            if (str[index-3] == 'a' && str[index - 2] == 'b')
            {
                cout << sub_count + 1 << endl;
            }
        }
    }
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
    solve();
    return 0;
}