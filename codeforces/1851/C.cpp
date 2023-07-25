#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    
    int arr[n + 1] = {0};
    int freq[n + 1] = {0};
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i]; 
        freq[arr[i]]++;
    }
    ll f = 0, l = 0;
    ll s = arr[0], e = arr[n - 1];
    for (int i = 0; i<n; i++)
    {
        if (s == e)
             f += arr[i] == s, l = f;
        else if (f < k)
            f += arr[i] == s;
        else
            l += arr[i] == e;
    }

    if (f < k || l < k)
    {
        cout << "NO\n";
        return;
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