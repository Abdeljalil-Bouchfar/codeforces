#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, t, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        res = gcd(res, abs(t - i - 1));
    }
    cout << res << endl;
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