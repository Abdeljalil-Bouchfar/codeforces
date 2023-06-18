#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<int> needs(101, 0);
    vector<int> counts(101, 0);
    ll max = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a)
            needs[a - 1]++;
        counts[a] ++;
    }

    for (ll i = 0; i < 101; i++)
    {
        if (needs[i] > counts[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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