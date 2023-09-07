#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;

    ll k = INT_MAX;
    while(n--)
    {
        ll d, s;
        cin >> d >> s;
        k = min(k, d + (--s / 2));
    }
    cout << k << endl;
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