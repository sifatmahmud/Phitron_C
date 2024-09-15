#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    long long int u, v, c;
    Edge(long long int u, long long int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
long long int dis[N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        long long int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    int s;
    cin >> s;

    dis[s] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (Edge ed : EdgeList)
        {
            long long int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] < 1e18 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    // for cycle detection
    bool cycle = false;
    for (Edge ed : EdgeList)
    {
        long long int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;

        if (dis[u] < 1e18 && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
            dis[v] = dis[u] + c;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i == d)
                {
                    if (dis[i] == 1e18)
                        cout << "Not Possible" << endl;
                    else
                        cout << dis[i] << endl;
                }
            }
        }
    }

    return 0;
}