#include <bits/stdc++.h>
using namespace std;

string FindBoardStatus(int size, vector<string> v)
{
  int flagblue = 0, flagred = 0;
  // TODO: Complete this function to find the status of the board.
  for (int i = 1; i < size - 1; i++)
  {
    int blue = 0;
    for (int j = 0; j < size; j++)
    {
      if (v[i][j] == 'B')
        blue++;
    }
    if (blue == size)
      flagblue++;
  }
  for (int i = 0; i < size; i++)
  {
    int red = 0;
    for (int j = 0; j < size; j++)
    {
      if (v[j][i] == 'R')
        red++;
    }
    if (red == size)
      flagred++;
  }
 // cout << flagblue << " " << flagred << endl;
  if (flagblue > 0 && flagred == 0)
    return "Blue wins";
  if (flagblue == 0 && flagred > 0)
    return "Red wins";
  if (size == 1 && flagblue==0 && flagred==0)
    return "Nobody wins";
  return "Impossible";
}

int main()
{
  int t;
  cin >> t;
  string s;
  for (int tc = 1; tc <= t; ++tc)
  {
    int n;
    cin >> n;
    vector<string> v;
    for (int r = 0; r < n; ++r)
    {
      cin >> s;
      v.push_back(s);
    }

    cout << "Case #" << tc << ": " << FindBoardStatus(n, v) << endl;
  }
  return 0;
}
