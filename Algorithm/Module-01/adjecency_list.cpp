#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a); // directed e bad
    }

    for (int x : mat[3])
    {
        cout << x << " ";
    }

    // for (int i = 0; i < mat[3].size(); i++)
    // {
    //     cout << mat[3][i] << " ";
    // }

    return 0;
}