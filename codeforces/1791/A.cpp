#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve()
{
    string s = "codeforces";
    char c;
    cin >> c;
    if (s.find(c) == -1)
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