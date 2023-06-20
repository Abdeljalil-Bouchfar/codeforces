#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr;

    ll sum = 0;
    ll opp = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += max(a, a * -1);
        if (a)
            arr.push_back(a);
    }
    for (ll i = 1; i < arr.size(); i++)
        opp += ((arr[i] > 0 && arr[i - 1] < 0));

    if (arr.size())
        opp += arr.back() < 0;
    cout << sum << " " << opp << endl;
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