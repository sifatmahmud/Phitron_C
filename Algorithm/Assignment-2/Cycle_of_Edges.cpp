#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int par_array[N];

int cycle_cnt = 0;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        ;

        for (int child : adj[parent])
        {
            if (vis[child] && par_array[parent] != child)
            {
                cycle_cnt++;
            }
            if (!vis[child])
            {
                vis[child] = true;
                par_array[child] = parent;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(par_array, -1, sizeof(par_array));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }

    cout << cycle_cnt / 2 << endl;

    return 0;
}