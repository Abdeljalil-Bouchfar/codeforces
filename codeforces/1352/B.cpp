#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, k, t;
    cin >> n >> k;
    vector<int> res;
    t = n - (k - 1);
    if (t > 0 && t % 2 == 1)
    {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++)
            cout << "1 ";
        cout << t << endl;
        return;
    }
    t = n - 2 * (k - 1);
    if (t > 0 && t % 2 == 0)
    {
        cout << "YES\n";
        for (int i = 0; i < k - 1; i++)
            cout << "2 ";
        cout << t << endl;
        return;
    }
    cout << "NO\n";
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