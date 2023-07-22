#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, k, ans = 1;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    ll cnt = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        ans = max(cnt, ans);
        if (arr[i + 1] - arr[i] <= k)
            cnt++;
        else cnt = 1;
    }
    ans = max(cnt, ans);
    cout << n - ans << endl;
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