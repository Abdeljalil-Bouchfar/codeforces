#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> as(n);
    ll e = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> as[i];
        e += as[i] % 2 == 0;
        o += as[i] % 2 != 0;
    }
    if (e == n || o == n)
    {
        cout << "YES\n";
        return;
    }
    o = 0;
    for (ll i = 0; i < n; i++)
    {
        if (as[i] % 2 == 0)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i != j && as[i] - as[j] > 0 && (as[i] - as[j]) % 2 != 0)
                {
                    o++;
                    break;
                }
            }
        }
        else    
            o++;
    }
    if (o == n)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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