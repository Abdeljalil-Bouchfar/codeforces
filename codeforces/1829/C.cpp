#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll mins[3];
    mins[0] = {2000000};
    mins[1] = {2000000};
    mins[2] = {2000000};
    for (ll i = 0; i < n; i++)
    {
        string s;
        ll t;
        cin >> t >> s;
        if (s == "11" && mins[0] > t)
            mins[0] = t;
        if (s == "10" && mins[1] > t)
            mins[1] = t;
        if (s == "01" && mins[2] > t)
            mins[2] = t;
    }
    if (mins[1] != 2000000 && mins[2] != 2000000 && (mins[0] == 2000000 || mins[1] + mins[2] < mins[0]))
        cout << mins[1] + mins[2] << endl;
    else if (mins[0] != 2000000)
        cout << mins[0] << endl;
    else
        cout << -1 << endl;
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