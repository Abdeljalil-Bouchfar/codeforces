#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<int> as(n);
    vector<int> bs(n);
    vector<int> res(n);
    vector<pair<int, int>> ainx(n);
    for (int i = 0; i < n; i++)
    {
        cin >> as[i];
        ainx[i] = {as[i], i};
    }
    sort(ainx.begin(), ainx.end());
    for (int i = 0; i < n; i++)
    {
        cin >> bs[i];
    }
    sort(bs.begin(), bs.end());
    for (int i = n - 1; i >= 0; --i)
    {
        res[ainx[i].second] = bs[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
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