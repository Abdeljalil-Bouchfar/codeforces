#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll ans = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if ((k > i or arr[i] == arr[k - 1]) and arr[i] > 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}