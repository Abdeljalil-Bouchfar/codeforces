#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = 0;
    while (abs(a - b) > (c * 2))
    {
        if (a > b)
            a -= c, b += c;
        else if (b > a)
            b -= c, a += c;
        ans++;
    }

    ans += a != b;
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