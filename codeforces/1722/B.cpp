#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (char &c : s1)
        if (c == 'B')
            c = 'G';
    for (char &c : s2)
        if (c == 'B')
            c = 'G';

    cout << (s1 == s2 ? "YES" : "NO") << endl;
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