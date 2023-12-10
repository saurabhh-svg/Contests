#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_N = 2e5 + 5;

vector<int> adj[MAX_N];
int dist[3][MAX_N];

void bfs(int player, int start)
{
    queue<pair<int, int>> q;
    q.push({start, 0});

    while (!q.empty())
    {
        int u = q.front().first;
        int d = q.front().second;
        q.pop();

        dist[player][u] = d;

        for (int v : adj[u])
        {
            if (dist[player][v] == -1)
            {
                q.push({v, d + 1});
            }
        }
    }
}

string findWinner(int a, int b, int c)
{
    if (dist[0][b] < dist[1][c] && dist[0][c] < dist[1][b])
    {
        return "A";
    }
    else if (dist[1][a] < dist[2][c] && dist[1][c] < dist[2][a])
    {
        return "B";
    }
    else if (dist[2][a] < dist[0][b] && dist[2][b] < dist[0][a])
    {
        return "C";
    }
    else
    {
        return "DRAW";
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        for (int i = 1; i <= N; ++i)
        {
            adj[i].clear();
            dist[0][i] = dist[1][i] = dist[2][i] = -1;
        }

        int a, b, c;
        cin >> a >> b >> c;

        for (int i = 1; i < N; ++i)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(0, a);
        bfs(1, b);
        bfs(2, c);

        cout << findWinner(a, b, c) << endl;
    }

    return 0;
}
