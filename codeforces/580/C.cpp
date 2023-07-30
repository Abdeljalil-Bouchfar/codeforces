#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;

struct node {
    bool val;
    vector<int> childs;
};

int ans = 0, m;
int visited[100000] = {0};
void dfs(vector<node> &nodes, int root, int con)
{
    visited[root] = 1;
    con += nodes[root].val;
    if(!nodes[root].val) con = 0;
    if (con > m) return;
    bool leaf = true;
    for (int &n : nodes[root].childs)
        if (!visited[n])
        {
            leaf = false;            
            dfs(nodes, n, con);
        }
    ans += leaf;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n >> m;
    vector<node> nodes(n);
    for (int i = 0; i < n; i++)
        cin >> nodes[i].val;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        nodes[x].childs.push_back(y);
        nodes[y].childs.push_back(x);
    }
    dfs(nodes, 0, 0);
    cout << ans << endl;
    return 0;
}