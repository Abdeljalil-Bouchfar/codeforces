#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int arr[26] = {0};
    ll ans = 0;
    for (char &c : s)
    {
        if (arr[c - 'A'] == 0)
            arr[c - 'A'] = 1, ans++;
        ans++;
    }

    cout << ans << endl;
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