#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    ll ans = 0, sum = 0;
    for (ll i = 0; i < n; i++)
        cin >> arr[i], sum += arr[i];
        
    if (sum % 3 == 0)
    {
        ll div = sum / 3, cnt = 0;
        sum = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            sum += arr[i];
            if (sum == 2 * div) ans += cnt;
            cnt += sum == div;
        }
    }
    cout << ans << endl;
    return 0;
}