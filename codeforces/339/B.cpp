#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m, ans = 0;
    cin >> n >> m;
    int arr[m];
    int p = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        if (!i)
            p = arr[i], ans += arr[i] - 1;
        else if (arr[i] > p)
            ans += arr[i] - p, p = arr[i];
        else if (arr[i] < p)
            ans += n - p + arr[i], p = arr[i];
    }
    cout << ans << endl;
    return 0;
}