#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    int f = 0, s = 0;
    bool ans = true;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        if (i == 0) f = t % 2;
        if (i == 1) s = t % 2;
        else if (ans)
        {
            if (i % 2 == 0)
                if ((f && t % 2 == 0) || (f == 0 && t % 2))
                    ans = false;
            if (i % 2)
                if ((s && t % 2 == 0) || (s == 0 && t % 2))
                    ans = false;
        }
    }
    
    cout << (ans ? "YES" : "NO") << endl;
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