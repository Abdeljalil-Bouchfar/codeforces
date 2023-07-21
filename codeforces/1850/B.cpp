#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;

    ll ans = 0, t = 0;
    for (int i = 1; i <= n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (a <= 10 && t < b)
            ans = i, t = b;
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