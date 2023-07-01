#include <bits/stdc++.h>
#include<unordered_map>
#define int long long int
using namespace std;

int solve(vector<string> &words, string prev, int ind, map<pair<int, string>, int> &dp)
{
    if (ind == words.size())
        return prev.size();

    if (dp.find({ind, prev}) != dp.end())
        return dp[{ind, prev}];
    int first = 0, second = 0;
    string temp = "";

    // first case
    if (prev[prev.size() - 1] == words[ind][0])
    {
        for (int i = 0; i < prev.size(); i++)
            temp += prev[i];
        for (int i = 1; i < words[ind].size(); i++)
            temp += words[ind][i];
    }
    else
        temp = prev + words[ind];

    first = solve(words, temp, ind + 1, dp);

    string temp2 = "";
    // second case
    if (prev[0] == words[ind][words[ind].size() - 1])
    {
        for (int i = 0; i < words[ind].size(); i++)
            temp2 += words[ind][i];
        for (int i = 1; i < prev.size(); i++)
            temp2 += prev[i];
    }
    else
        temp2 = words[ind] + prev;

    second = solve(words, temp2, ind + 1, dp);

    return dp[{ind, prev}] = min(first, second);
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--){
        int n;
        cin >> n;
        map<pair<int, string>, int> dp;
        vector<string> w(n);
        for (int i = 0; i < n;i++)
            cin >> w[i];
        cout<<solve(w,w[0],1,dp)<<endl;
}
 }
