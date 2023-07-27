#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n, c, h;
    cin >> n >> c >> h;
    ll ans = 3;
    n -= 2;
    c--;
    if (n > 0)
        ans += (min(n, c) * 2);
    n -= c;
    if (n > 0)
        ans += (min(n, h) * 2);
    
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