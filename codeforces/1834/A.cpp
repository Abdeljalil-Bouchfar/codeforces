#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (accumulate(arr.begin(), arr.end(), 0) >= 0 && accumulate(arr.begin(), arr.end(), 1, std::multiplies<double>()) == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
            arr[i] = 1, ans++;
         if (accumulate(arr.begin(), arr.end(), 0) >= 0 && accumulate(arr.begin(), arr.end(), 1, multiplies<double>()) == 1)
            break;
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