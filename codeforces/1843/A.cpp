#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n <= 1)
    {
        cout << "0\n";
        return;
    }

    sort(arr.begin(), arr.end());

    ll s = 0, e = n - 1;

    ll ans = 0;
    while (e > s)
        ans += arr[e--] - arr[s++];

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