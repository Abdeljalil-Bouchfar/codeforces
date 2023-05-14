#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0, t = 1;
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    if (n % 2 == 0)
        t++;
    for (int i = n - 1; i > 0; i--)
    {
        t = i + 1;
        while (t % (i + 1))
        {
            t++;
            if (n % 2 == 0)
                t++;
        }
        arr[i] = t;
        sum += t;
    }
    t = 1;
    while ((sum + t) % n)
        t++;
    arr[0] = t;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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