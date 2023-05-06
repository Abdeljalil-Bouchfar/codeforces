#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> ns;
    ns.push_back(n);
    if (m == n)
    {
        cout << "YES\n";
        return;
    }
    while (!ns.empty())
    {
        if (ns[ns.size() - 1] % 3 == 0 && ((ns[ns.size() - 1] / 3) * 2 == m || (ns[ns.size() - 1] / 3) == m))
        {
            cout << "YES\n";
            return;
        }
        int tmp = ns[ns.size() - 1];
        ns.pop_back();
        if (tmp % 3 == 0)
        {
            ns.push_back((tmp / 3) * 2);
            ns.push_back((tmp / 3));
        }
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