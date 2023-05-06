#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


int dfs(vector<vector<ll>>& mtx, vector<vector<bool>>& visited, int row, int col) {
    if (row < 0 || col < 0 || row >= mtx.size() || col >= mtx[0].size() || mtx[row][col] == 0 || visited[row][col]) {
        return 0;
    }
    visited[row][col] = true;
    int sum = mtx[row][col];
    sum += dfs(mtx, visited, row-1, col);
    sum += dfs(mtx, visited, row+1, col);
    sum += dfs(mtx, visited, row, col-1);
    sum += dfs(mtx, visited, row, col+1);
    return sum;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll max = 0;
    vector<vector<ll>> mtx(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> mtx[i][j];
    }
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (ll row = 0; row < n; ++row) {
        for (ll col = 0; col < m; ++col) {
            if (!visited[row][col] && mtx[row][col] != 0) {
                ll sum = dfs(mtx, visited, row, col);
                if (sum > max)
                    max = sum;
            }
        }
    }
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}