#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, ans = 0;
    string s;
    cin >> n >> s;
    set<string> h;
    for(int i = 0; i < n - 1; i++)
    {
        h.insert(s.substr(i, 2));
    }
    cout << h.size() << endl;
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