#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int len = 1;
    int res[n * 2];
    res[0] = arr[0];

    for (int i = 1; i < n;i++)
    {
        if (res[len - 1] > arr[i])
            res[len++] = arr[i];
        res[len++] = arr[i];
    }
    cout << len << endl;

    for (int i = 0; i < len;i++)
    {
        cout << res[i] << ' ';
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