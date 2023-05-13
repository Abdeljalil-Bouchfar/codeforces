#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, k, res = 0;
    cin >> n >> k;
    ll arr[n];
    ll pre[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    pre[0] = 0;
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + arr[i];
    
    for (int i = 0; i <= k; i++)
        res = max(res, pre[n - (k - i)] - pre[2 * i]);
    
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