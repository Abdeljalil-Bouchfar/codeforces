#include <bits/stdc++.h>
 
typedef unsigned long long ll;

using namespace std;
 
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll pos = 1;
    while (k--)
    {
        pos = pos * 2;
        if (n + 1 < pos)
            break;
    }
    cout << min(pos, n + 1) << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}