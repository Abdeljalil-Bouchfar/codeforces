#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    int n, l;
    cin >> n >> l;

    string arr[n];
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            int tmp = 0;
            for (int c = 0; c < l; c++)
                tmp += min(abs(arr[i][c] - arr[j][c]), abs(arr[j][c] - arr[i][c]));

            ans = min(ans, tmp);
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