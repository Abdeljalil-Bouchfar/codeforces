#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n, m, k, h;
    cin >> n >> m >> k >> h;
    
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;

        if (h != t && abs(h - t) % k == 0 && abs(h - t) + k <= m * k)
        {
            ans++;
        }
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