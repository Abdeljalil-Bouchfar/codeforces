#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve()
{
    ll n, m, c, d;
    ll res = 0;
    cin >> n >> m >> c >> d;
    if (m > n)
        res++;
    if (c > n)
        res++;
    if (d > n)
        res++;
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