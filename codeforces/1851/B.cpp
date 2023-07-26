#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    
    int arr1[n];
    int arr2[n];

    for (ll i = 0; i < n; i++)
        cin >> arr1[i], arr2[i] = arr1[i];
    sort(arr1, arr1 + n);
    for (ll i = 0; i < n; i++)
    {
        if (arr1[i] % 2 != arr2[i] % 2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES" << endl;
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