#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll max = 0, tmp = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != 0)
        {
            if (tmp > max)
                max = tmp;
            tmp = 0;
        }
        else
            tmp++;
    }
    if (tmp > max)
        max = tmp;
    cout << max << endl;
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