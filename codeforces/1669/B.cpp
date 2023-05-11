#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, t, res = -1;
    cin >> n;
    vector<int> arr(n + 1, 0);
    while (n--)
    {
        cin >> t;
        if (++arr[t] >= 3)
            res = t;
    }
    cout << res << "\n";
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