#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            x--;
        if (s[i] == 'R')
            x++;
        if (s[i] == 'D')
            y--;
        if (s[i] == 'U')
            y++;
        if (x == 1 && y == 1)
        {
            cout << "YES\n";
            return;
        }
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