#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    int arr[n];
    vector<ll> sum(n + 1);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, greater<int>());

    sum[0] = 0;
    for (int i = 0; i < n; i++)
        sum[i + 1] = sum[i] + arr[i];

    while (q--)
    {
        ll s;
        cin >> s;
        if (s > sum[n])
            cout << -1 << endl;
        else
            cout << lower_bound(sum.begin(), sum.end(), s) - sum.begin() << endl;
    }
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