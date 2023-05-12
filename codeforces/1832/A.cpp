#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll w = 0, d = 0;
    string s;
    cin >> s;
    ll arr[28] = {0};
    for (auto &c : s)
        arr[c - 'a']++;
    for (int i = 0; i < 28; i++)
        w += arr[i] == 1, d += arr[i] > 1;
    //cout << "----> " << d << '\n';
    if (s.length() < 3 || d <= 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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