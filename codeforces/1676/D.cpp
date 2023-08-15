#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n, m;
    cin >> n >> m;

    int board[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];
    
    ll ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            ll tmp = board[i][j];
            
            int ti = i, tj = j;
            while(ti > 0 && tj > 0)
                tmp += board[--ti][--tj];
            
            ti = i, tj = j;
            while(ti < n  - 1 && tj < m - 1)
                tmp += board[++ti][++tj];
            
            ti = i, tj = j;
            while(ti > 0 && tj < m - 1)
                tmp += board[--ti][++tj];
            
            ti = i, tj = j;
            while(ti < n - 1 && tj > 0)
                tmp += board[++ti][--tj];

            ans = max(ans, tmp);
        }
    
    cout << ans << endl;
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