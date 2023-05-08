#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve()
{
    string s;
    ll res = 0, n;
    cin >> n >> s;
    if (s.length() != 5 || s.find('T') == -1 || s.find('i') == -1 || s.find('m') == -1 || s.find('u') == -1 || s.find('r') == -1)
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