#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, res = 0, t;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s.insert(t);
    }
    if ((n - s.size()) % 2 == 0)
        cout << s.size() << endl;
    else
        cout << s.size() - 1 << endl;
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