#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ans += s[1] == '+';
        ans -= s[1] == '-';
    }
    cout << ans << endl;
    return 0;
}