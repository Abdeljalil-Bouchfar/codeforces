#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll a, b, c;
    cin >> a >> b >>  c;
    
    cout << ((a + b >= 10 || a + c >= 10 || b + c >= 10) ? "YES" : "NO") << endl;
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